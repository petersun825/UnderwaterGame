using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonChatString : MonoBehaviour
{
    public string output;

    // Argument JSON, return string variable 'outputText' for first text of candidates
    public string convertJson(string jsonResponse)
    {
        JObject parsedResponse = JObject.Parse(jsonResponse);
        JArray candidates = (JArray)parsedResponse["candidates"];

        // Extract the 'content' of the first candidate
        output = (string)candidates[0]["content"];
        return output;
    }
}