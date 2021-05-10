/* (Luke Alcazar) 
 * (CharacterTester) 
 * (Assignment_2) 
 * (What we use to test out the strategy pattenr) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterTester : MonoBehaviour
{
    public Character wiz;
    public Character fighter;
    public Character pali;
    void Start()
    {
        wiz = new Wizard();
        fighter = new Fighter();
        pali = new Paladin();
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            Text tx = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
            tx.text = "Wizard";
            wiz.DoAttack();

        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            Text tx = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
            tx.text = "Fighter";
            fighter.DoAttack();
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            Text tx = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
            tx.text = "Paladin";
            pali.DoAttack();
        }
    }



}
