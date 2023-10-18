
using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Text;
using Newtonsoft.Json;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;
using static Unity.Burst.Intrinsics.X86.Avx;

public class GoogleChatAPI : MonoBehaviour
{
    // Declare outputArea
    //TMP_InputField outputArea;
    public TMP_Text contentText;

    // Declare JsonString Class for turning JSON back to string
    public JsonString JsonString;
    public GameObject ExportTextArea;
    private readonly string baseUri = "https://generativelanguage.googleapis.com/v1beta3/models/chat-bison-001:generateMessage?key=";
    // Declare a string called 'message'
    public string message;
    public GameObject APIKeyObject; // Drag your APIKeyObject here in the inspector
    private string key;

    void Start()
    {
        // Assign API key to key
        APIKey apiKeyComponent = APIKeyObject.GetComponent<APIKey>();
        key = apiKeyComponent.key;
       
         // Assign text to output area of TMP Input field
         //outputArea = ExportTextArea.GetComponent<TMP_InputField> ();
        contentText = ExportTextArea.GetComponent<TMP_Text>();

        // Assign OnButtonPress to the button's onClick event
        //GameObject.Find("GetButton").GetComponent<Button>().onClick.AddListener(OnButtonPress);
    }
    // Method to assign the text of a TMP_InputField GameObject to 'message'
    public void AssignMessageFromInputField(GameObject inputFieldObject)
    {
        TMP_InputField inputField = inputFieldObject.GetComponent<TMP_InputField>();
        if (inputField != null)
        {
            message = inputField.text;
            Debug.Log("Message assigned: " + message);
        }
        else
        {
            Debug.LogError("TMP_InputField component not found on the GameObject");
        }
    }
    public void OnButtonPress()
    {
        // Concat URL to include API key
        string uri = baseUri + key;

        // Create the 'prompt' dictionary
        Dictionary<string, object> prompt = new Dictionary<string, object>
        {
            { "context", "You are an expert in ocean plastic pollution. Talk to me like I'm a high school level student." },
            { "examples", new List<object>() },
            { "messages", new List<object> { new Dictionary<string, string> { { "content", "NEXT REQUEST" } } } }
        };

        // Payload data
        Dictionary<string, object> payload = new Dictionary<string, object>
        {
            { "prompt", prompt },
            { "temperature", 0.25 },
            { "top_k", 40 },
            { "top_p", 0.95 },
            { "candidate_count", 1 }
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
                contentText.text = JsonString.convertJson(webRequest.downloadHandler.text);
                Debug.Log("Received: " + webRequest.downloadHandler.text);
            }
        }
    }
}





