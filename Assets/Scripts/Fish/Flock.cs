using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Flock : MonoBehaviour
{
    [SerializeField] public float speed = 0.2f;
    [SerializeField] float rotationSpeed = 4f;
    Vector3 averageHeading;
    Vector3 averagePosition;

    [SerializeField] float neighbourDistance = 2f;

    bool turning = false;


    // Start is called before the first frame update
    void Start()
    {
        speed = Random.Range(1f, 2.0f);
    }

    // Update is called once per frame
    void Update()
    {
        if(Vector3.Distance(transform.position, Vector3.zero)>= GlobalFlock.tankSize)
        {
            turning = true;
        }
        else { turning = false; }

        if (turning)
        {
            Vector3 direction = Vector3.zero - transform.position;
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(direction), rotationSpeed * Time.deltaTime);
            speed = Random.Range(0.01f, 0.3f);  
        }
        else
        {
            if (Random.Range(0, 5) < 1)
                ApplyRules();
        }
        transform.Translate(-Time.deltaTime * speed, 0, -Time.deltaTime * speed);
        if(Random.Range(0,5)<1)
        {
            ApplyRules();
        }
       
     
    }

    void ApplyRules()
    {
        GameObject[] gos;
        gos = GlobalFlock.allFish;

        Vector3 vcentre = Vector3.zero;
        Vector3 vavoid = Vector3.zero;
        float gSpeed = 0.1f;

        Vector3 goalPos = GlobalFlock.goalPos;

        float dist;

        int groupSize = 0;
        foreach (GameObject go in gos)
        {
            if(go != this.gameObject)
            { 
                dist = Vector3.Distance(go.transform.position, this.transform.position);
                if(dist <= neighbourDistance)
                {
                    vcentre += go.transform.position;
                    groupSize++;

                    if (dist <1.0f)
                    {
                        vavoid = vavoid + (this.transform.position - go.transform.position);
                    }

                    Flock anotherFlock = go.GetComponent<Flock>();
                    gSpeed = gSpeed + anotherFlock.speed;
                }
            }
        }

        if(groupSize > 0) 
        {
            vcentre = vcentre / groupSize + (goalPos - this.transform.position);
            speed = gSpeed / groupSize;

            Vector3 direction = (vcentre + vavoid) - transform.position;
            if (direction != Vector3.zero)
                transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(direction), rotationSpeed * Time.deltaTime);
        }

    }
}
