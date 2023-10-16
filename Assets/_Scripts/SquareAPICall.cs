using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Text;
using Newtonsoft.Json;
using System.Collections.Generic;
using TMPro;

public class SquareAPICall : MonoBehaviour
{
    private readonly string baseUri = "https://connect.squareupsandbox.com/v2/subscriptions";
    

    void Start()
    {
  
    }

    public void onButtonPress()
    {
        Debug.Log("baseURI: " + baseUri);
        // Create a dictionary to hold the payload data
        Dictionary<string, string> payload = new Dictionary<string, string>
        {
            { "customer_id", "R4MHADH253P2BP6VWTCYMQCSM8" },
            { "location_id", "LG0166611RRSA" },
            { "plan_variation_id", "ZNIET46HSVTYYIF4ZIYOS6G5" }
        };

        // Serialize the dictionary to JSON
        string jsonPayload = JsonConvert.SerializeObject(payload);

        // Start the coroutine to send the POST request
        StartCoroutine(PostRequest(jsonPayload));
    }
    IEnumerator PostRequest(string jsonPayload)
    {
        byte[] jsonPayloadBytes = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest webRequest = new UnityWebRequest(baseUri, "POST"))
        {
            webRequest.uploadHandler = new UploadHandlerRaw(jsonPayloadBytes);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Square-Version", "2023-09-25");
            webRequest.SetRequestHeader("Authorization", "Bearer EAAAEKOgNpxjBaib3eBp9tktE3p3seSKYWSHUccy-lXt4qcf9jS-djrJRZhQPU66");
            webRequest.SetRequestHeader("Content-Type", "application/json");

            // Send the request and wait for a response
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.ConnectionError ||
                webRequest.result == UnityWebRequest.Result.DataProcessingError)
            {
                Debug.LogError("Error: " + webRequest.error);
            }
            else if (webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("HTTP Error: " + webRequest.error);
            }
            else
            {
                Debug.Log("Received: " + webRequest.downloadHandler.text);
            }
        }
    }
}
