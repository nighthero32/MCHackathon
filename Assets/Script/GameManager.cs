using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

public class GameManager : MonoBehaviour
{
    private int Count = 0;
    [SerializeField]
    private int AnswerRequirement = 10;

    [SerializeField]
    private int difficultyLvl;

    // The difficulty level of the game
    private int difficulty;

    public int answer;

    public Text questionText;
    public Text resultText;

    public GameObject[] numberObjectsPrefabs;
    public XRGrabInteractable[] numberObjects;
    public XRSocketInteractor[] snapZones;

    public List<GameObject> answerObjects;
    private List<GameObject> snappedObjects;


    int numQuestions = 10;
    int numCorrect = 0;

    List<int[]> questions = new List<int[]>();

    [SerializeField]
    private GameObject DifficultyMenu;

    public int EquationAnswer;

    private void Start()
    {
        Debug.Log(Count);
        answerObjects = new List<GameObject>();

    }

    public void AddCount()
    {
        Count++;
        Debug.Log(Count);
        if (Count == AnswerRequirement)
        {
            LevelCompleted();
        }
    }

    private void LevelCompleted()
    {
        Debug.Log("Congratulation you solve everything!");
    }

    public void GameStart()
    {
        Debug.Log("The game Start with the difficulty selected");

        if (PlayerPrefs.HasKey("difficulty"))
        {
            difficulty = PlayerPrefs.GetInt("difficulty");
        }
        switch (difficulty)
        {
            case 1:
                Debug.Log("start lvl 1");
                DisableMenu();
                Lvl1();
                break;

            case 2:
                Debug.Log("start lvl 2");
                DisableMenu();
                Lvl2();
                break;
            case 3:
                Debug.Log("start lvl 3");
                DisableMenu();
                Lvl3();
                break;

            case 4:
                Debug.Log("start lvl 4");
                DisableMenu();
                Lvl4();
                break;
        }
    }

    private void DisableMenu()
    {
        DifficultyMenu.SetActive(false);
    }

    public void Lvl1()
    {

        // generate 10 random multiplication questions from tables 1, 2, and 10
        GenerateQuestions(new int[] { 1, 2, 10 });
      

        // ask the first question
        DisplayQuestion(0);
    }

    public void Lvl2()
    {
        // generate 10 random multiplication questions from tables 5, 9, and 11
        GenerateQuestions(new int[] { 5, 9, 11 });
        DisplayQuestion(0);
    }

    public void Lvl3()
    {
        // generate 10 random multiplication questions from tables 3, 4, and 6
        GenerateQuestions(new int[] { 3, 4, 6 });
        DisplayQuestion(0);
    }

    public void Lvl4()
    {
        // generate 10 random multiplication questions from tables 7, 8, and 12
        GenerateQuestions(new int[] { 7, 8, 12 });
        DisplayQuestion(0);
    }

    private void GenerateQuestions(int[] tables)
    {
        // generate 10 random multiplication questions from the given tables
        for (int i = 0; i < numQuestions; i++)
        {
            int[] question = new int[2];
            int table = tables[Random.Range(0, tables.Length)];
            question[0] = Random.Range(1, 11);
            question[1] = table * question[0];
            questions.Add(question);
        }
    }

    void DisplayQuestion(int index)
    {
        // display the question
        int[] question = questions[index];
        questionText.text = question[0] + " x " + (question[1] / question[0]) + " = ";
        resultText.text = "";
        ClearAnswerObjects();

        
        // activate the number objects and assign their values
        int[] values = { question[0], question[1] };
        ShuffleArray(values);
        int numDigits = values[1].ToString().Length;
        Debug.Log("Before loop");
        for (int i = 0; i < numDigits; i++)
        {
            Debug.Log("Inside loop, i = " + i + " numDigits = " + numDigits);
            GameObject objPrefab = numberObjectsPrefabs[values[1].ToString()[i] - '0'];
            GameObject obj = Instantiate(objPrefab);
            obj.transform.parent = numberObjectsPrefabs[i].transform.parent;
            obj.transform.position = numberObjectsPrefabs[i].transform.position;
            obj.transform.rotation = numberObjectsPrefabs[i].transform.rotation; 
          
            //  obj.transform.parent = numberObjects[i].transform.parent;
           // obj.transform.position = numberObjects[i].transform.position;
          //  obj.transform.rotation = numberObjects[i].transform.rotation;
            obj.SetActive(true);
            answerObjects.Add(obj);
        }
        /*for (int i = 0; i < numDigits; i++)
        {
            Debug.Log("Inside loop, i = "+ i + " numDigits = "+ numDigits);


            GameObject obj = numberObjects[i].gameObject;
            obj.SetActive(true);
            obj.GetComponentInChildren<Text>().text = values[1].ToString()[i].ToString();
            answerObjects.Add(obj);
            Debug.Log("-------------------------");
            Debug.Log(answerObjects);
            Debug.Log("-------------------------");

        }
        for (int i = numDigits; i < 2; i++)
        {
            Debug.Log("Somewhere weird");
            numberObjects[i].gameObject.SetActive(false);
        }*/
    }

    public void CheckAnswer(XRSocketInteractor socketInteractor, DigitTag digitTag, GameObject currentDigit)
    {
        // check the answer
        int index = numCorrect;
        int[] question = questions[index];
        answer = question[1];
        Debug.Log("The whole name : " + answerObjects[0].name);
        Debug.Log("just the digit : "+ char.GetNumericValue(answerObjects[0].name[0]));
        Debug.Log("Value of the number = "+digitTag.digitValue);

        Debug.Log(answerObjects.Contains(currentDigit));
         if (answerObjects.Contains(currentDigit/*socketInteractor.gameObject*/))
      //  if (digitTag.digitValue == char.GetNumericValue(answerObjects[0].name[0]))
        {
            resultText.text = "Correct!";
            numCorrect++;

            Debug.Log(answerObjects.IndexOf(socketInteractor.gameObject));
            int answerIndex = answerObjects.IndexOf(socketInteractor.gameObject);

            answerObjects.RemoveAt(answerIndex);
            snapZones[answerIndex].socketActive = true;
            snappedObjects[answerIndex] = socketInteractor.gameObject;
            socketInteractor.transform.parent = snapZones[answerIndex].transform;
            socketInteractor.transform.position = snapZones[answerIndex].transform.position;
            socketInteractor.transform.rotation = snapZones[answerIndex].transform.rotation;
            socketInteractor.interactionLayerMask = LayerMask.GetMask("Ignore Raycast");
            if (answerObjects.Count == 0)
            {
                ClearAnswerObjects();
                // ask the next question or end the game
                if (numCorrect < numQuestions)
                {
                    DisplayQuestion(numCorrect);
                }
                else
                {
                    questionText.text = "Game Over. You got " + numCorrect + " out of " + numQuestions + " correct.";
                    foreach (XRGrabInteractable numberObject in numberObjects)
                    {
                        numberObject.gameObject.SetActive(false);
                    }
                }
            }
        }
        else
        {
            Destroy(currentDigit);
            resultText.text = "Incorrect.";
        }
    }
    
    void ClearAnswerObjects()
    {
        foreach (XRSocketInteractor snapZone in snapZones)
        {
            snapZone.socketActive = false;
        }
    }

    // Fisher-Yates shuffle algorithm for shuffling array elements randomly
    void ShuffleArray<T>(T[] arr)
    {
        for (int i = arr.Length - 1; i > 0; i--)
        {
            int j = Random.Range(0, i + 1);
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}