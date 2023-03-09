using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DigitTag : MonoBehaviour
{
    public int digitValue; // The value of this digit (e.g. 3 for the digit "3")

    void Start()
    {
        // Set the tag of this GameObject to "Answer" so the SnapZone can recognize it
        gameObject.tag = "Answer";
    }
}
