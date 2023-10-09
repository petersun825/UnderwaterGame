using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalFlock : MonoBehaviour
{
    public GameObject fishPrefab;
    [SerializeField] public static int tankSize = 8;

    static int numFish = 100;
    public static GameObject[] allFish = new GameObject[numFish];

    public static Vector3 goalPos = Vector3.zero;


    // Start is called before the first frame update
    void Start()
    {
        for(int i=0; i<numFish; i++)
        {
            Vector3 pos = new Vector3(-40+Random.Range(-tankSize+5, 2*tankSize),
                                        Random.Range(-tankSize+5, tankSize),
                                        Random.Range(-2*tankSize, 2*tankSize));
            allFish[i] = (GameObject) Instantiate(fishPrefab, pos, Quaternion.identity);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(Random.Range(0,10000)< 500)
        {
            goalPos = new Vector3(Random.Range(-tankSize, tankSize),
                            Random.Range(-tankSize, tankSize),
                            Random.Range(-tankSize, tankSize));
            //goalPrefab.transform.position = goalPos;
        }
    }
}
