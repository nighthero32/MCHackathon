using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CheckAnswer : MonoBehaviour
{
        private GameObject currentDigit; // The digit currently in the snap zone
    [SerializeField]
    GameManager gameManager;

    public XRSocketInteractor socketInteractor;


    void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the snap zone has the "Answer" tag
        if (other.CompareTag("Answer"))
        {

            // Get the DigitTag component of the other object
            DigitTag digitTag = other.GetComponent<DigitTag>();
             socketInteractor = gameObject.GetComponent<XRSocketInteractor>();


// Check if the digit value matches the expected value
            if (digitTag != null && digitTag.digitValue == char.GetNumericValue(gameManager.answerObjects[0].name[0]))
           {
                   // Set the tag of the object to "Untagged" so it can't be picked up again
            other.tag = "Untagged";

                  // Set the current digit to the other object
            currentDigit = other.gameObject;

              // Snap the object into place
            socketInteractor.socketActive = true;
               // socketInteractor.SelectEnter(other.gameObject, null);
              //  socketInteractor.selectEntered(other.gameObject);

                 // Tell the GameManager that the digit has been snapped into place
            gameManager.CheckAnswer(socketInteractor, digitTag, currentDigit);
            Debug.Log(digitTag.digitValue + "     " + gameManager.answer);
             }
        else
        {
            Destroy(other.gameObject);
            Debug.Log("Wrong answer, your current digit is" + digitTag.digitValue+" and we were expecting a "+ gameManager.answerObjects[0].name[0]);
        }
            // Check if the digit value matches the expected value
            //   if (digitTag != null && digitTag.digitValue == gameManager.answergameManager.CurrentAnswer())
            //   {
            // Set the tag of the object to "Untagged" so it can't be picked up again
            //      other.tag = "Untagged";

            // Set the current digit to the other object
            //      currentDigit = other.gameObject;

            // Tell the GameManager that the digit has been snapped into place
            //   gameManager.DigitSnappedIntoPlace();
            //  }
            //   else
            //   {
            //      Debug.Log("eille quest tu criss la");
            //  }
        }
    }

 
    void OnTriggerExit(Collider other)
    {
        // Check if the object leaving the snap zone is the current digit
        if (other.gameObject == currentDigit)
        {
            // Reset the current digit
            currentDigit = null;
        }
    }


    /*[SerializeField]
    GameManager GameManagerScript;

    [SerializeField]
    private string Answer;

    private BoxCollider ResultOfTheUser;

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("RightAnswer"))
        {
            XRSocketInteractor socketInteractor = gameObject.GetComponent<XRSocketInteractor>();
            ResultOfTheUser = other.GetComponent<BoxCollider>();
            if (socketInteractor != null)
            {
                socketInteractor.enabled = true;
                Debug.Log("XR Socket Interactor enabled");
            }
        }
    }

    
    public void GoodAnswer()
    {
        GameManagerScript.AddCount();
        ResultOfTheUser.enabled = false;
        gameObject.SetActive(false);
        Debug.Log("Good Answer");
    }
    */
}