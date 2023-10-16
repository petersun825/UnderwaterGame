using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonString : MonoBehaviour
{
    public string output;
    //argument JSON, return string variable 'outputText' for first text of candidates
    public string convertJson(string jsonResponse)
    {
        JObject parsedResponse = JObject.Parse(jsonResponse);
        JArray candidates = (JArray)parsedResponse["candidates"];
        
        
        output = (string)candidates[0]["output"];
        return output;



    }
}
