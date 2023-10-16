
using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Text;
using Newtonsoft.Json;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;

public class APICall : MonoBehaviour
{
    // Declare outputArea
    TMP_InputField outputArea;

    // Declare JsonString Class for turning JSON back to string
    public JsonString JsonString;

    private readonly string baseUri = "https://generativelanguage.googleapis.com/v1beta3/models/text-bison-001:generateText?key=";

    public GameObject APIKeyObject; // Drag your APIKeyObject here in the inspector
    private string key;

    void Start()
    {
        // Assign API key to key
        APIKey apiKeyComponent = APIKeyObject.GetComponent<APIKey>();
        key = apiKeyComponent.key;

        // Assign text to output area of TMP Input field
        outputArea = GameObject.Find("OutputArea").GetComponent<TMP_InputField>();

        // Assign OnButtonPress to the button's onClick event
        //GameObject.Find("GetButton").GetComponent<Button>().onClick.AddListener(OnButtonPress);
    }

    public void OnButtonPress()
    {
        // Concat URL to include API key
        string uri = baseUri + key;

        // Payload data
        Dictionary<string, object> payload = new Dictionary<string, object>
        {
            { "prompt", new Dictionary<string, string> { { "text", "write about ocean plastic pollution" } } },
            { "temperature", 0.8 },
            { "candidateCount", 1 },{"maxOutputTokens", 800},
            {"topP", 0.8},
            {"topK", 10}
        };

        // Serialize payload
        string jsonPayload = JsonConvert.SerializeObject(payload);
        Debug.Log("Serialized JSON Payload: " + jsonPayload);

        // Start coroutine
        StartCoroutine(PostRequest(uri, jsonPayload));
    }

    IEnumerator PostRequest(string uri, string jsonPayload)
    {
        byte[] jsonPayloadBytes = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest webRequest = new UnityWebRequest(uri, "POST"))
        {
            webRequest.uploadHandler = new UploadHandlerRaw(jsonPayloadBytes);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");
      
            Debug.Log("Sending POST request to " + uri);
            Debug.Log("Payload: " + jsonPayload);

            // Send the request and wait for a response
            yield return webRequest.SendWebRequest();

            Debug.Log("Response Code: " + webRequest.responseCode);
            Debug.Log("Response: " + webRequest.downloadHandler.text);


            if (webRequest.result == UnityWebRequest.Result.ConnectionError ||
                webRequest.result == UnityWebRequest.Result.DataProcessingError)
            {
                Debug.LogError("Error: " + webRequest.error);
             
                Debug.LogError("Status Code: " + webRequest.responseCode);
            }
            else if (webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("HTTP Error: " + webRequest.error);
            }
            else
            {
                outputArea.text = JsonString.convertJson(webRequest.downloadHandler.text);
                Debug.Log("Received: " + webRequest.downloadHandler.text);
            }
        }
    }
}







