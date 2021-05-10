/* (Luke Alcazar) 
 * (AttackTester) 
 * (Assignment 4) 
 * (This script allows us to test the Attack script as well as the decorator pattern) */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AttackTester : MonoBehaviour
{
    Attack claymore;
    Attack dagger;
    Attack longSword;
    Text tx; 

    void Start()
    {
        claymore = new Claymore();

        dagger = new Dagger();

        longSword = new LongSword();

        tx = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
    }

    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            claymore = new Claymore();

            dagger = new Dagger();

            longSword = new LongSword();

            tx.text = "All weapons reset";
        }

        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            claymore = new BuffAdrenaline(claymore);
            tx.text = claymore.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            claymore = new BuffBlessed(claymore);
            tx.text = claymore.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            claymore = new BuffEnraged(claymore);
            tx.text = claymore.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            dagger = new BuffAdrenaline(dagger);
            tx.text = dagger.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            dagger = new BuffBlessed(dagger);
            tx.text = dagger.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            dagger = new BuffEnraged(dagger);
            tx.text = dagger.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            longSword = new BuffAdrenaline(longSword);
            tx.text = longSword.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha8))
        {
            longSword = new BuffBlessed(longSword);
            tx.text = longSword.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Alpha9))
        {
            longSword = new BuffEnraged(longSword);
            tx.text = longSword.GetName();
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            String();
        }
    }

    void String()
    {
        tx.text = claymore.GetName() + " does " + claymore.GetDamage() + " damage.\n"
                + dagger.GetName() + " does " + dagger.GetDamage() + " damage.\n" +
                longSword.GetName() + " does " + longSword.GetDamage() + " damage.";
    }
}
