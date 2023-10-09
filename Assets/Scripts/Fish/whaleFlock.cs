using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class whaleFlock : MonoBehaviour

{
    public float speed = -3.0f;  // Forward speed
    public float rotationSpeed = 100.0f;  // Rotation speed for random turns

    private Rigidbody rb;  // Rigidbody component

    void Start()
    {
        // Get the Rigidbody component
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        // Move the whale forward
        rb.velocity = transform.forward * speed;

        // Randomly rotate the whale
        if (Random.Range(0, 100) < 5)  // 2% chance to initiate a turn
        {
            // Apply torque for rotation
            rb.AddTorque(Vector3.up * Random.Range(-rotationSpeed, rotationSpeed));
        }
    }
}
