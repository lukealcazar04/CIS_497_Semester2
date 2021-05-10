/* (Luke Alcazar) 
 * (SkillTreeTester) 
 * (Assignment 8) 
 * (This allows the player to test and use the skilltree) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkillTreeTester : MonoBehaviour
{
    Mining mining;
    Swords swords;
    Archery archery;
    Text tx1;
    Text tx2;
    Text tx3;

    void Start()
    {
        mining = new Mining();
        swords = new Swords();
        archery = new Archery();

        tx1 = GameObject.FindGameObjectWithTag("Mining").GetComponent<Text>();
        tx2 = GameObject.FindGameObjectWithTag("Swords").GetComponent<Text>();
        tx3 = GameObject.FindGameObjectWithTag("Archery").GetComponent<Text>();
    }

    
    void Update()
    {
        tx1.text = mining.ToString();
        tx2.text = swords.ToString();
        tx3.text = archery.ToString();


        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            swords.DoThings();
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            archery.DoThings();
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            mining.DoThings();
        }

        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            swords.level = 0;
            archery.level = 0;
            mining.level = 0;
        }
    }
}
