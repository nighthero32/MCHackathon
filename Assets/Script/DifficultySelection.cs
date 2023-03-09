using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DifficultySelection : MonoBehaviour
{
    //initialize the number to be minimum 1 not 0
    private void Awake()
    {
        if (PlayerPrefs.GetInt("difficulty") == 0)
        {
            PlayerPrefs.SetInt("difficulty", 1);
        }
    }

    //save the difficulty number to PlayerPrefs
    public void SaveDifficulty(int _difficulty)
    {
        PlayerPrefs.SetInt("difficulty", _difficulty);
    }
}
