/* (Luke Alcazar) 
 * (CharacterSimulator) 
 * (Assignment 6) 
 * (This allows us to test and use the factory pattern we created) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterSimulator : MonoBehaviour
{
    public CharacterCreator heroSpawner;
    public CharacterCreator hordeSpawner;
    public Character hero;
    public Character horde;
    public Text tx;
    public Text tx1;

    void Start()
    {

        heroSpawner = new HeroCreator();
        hordeSpawner = new HordeCreator();

        tx = GameObject.FindGameObjectWithTag("Text1").GetComponent<Text>();
        tx1 = GameObject.FindGameObjectWithTag("Text2").GetComponent<Text>();
    }


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            hero = heroSpawner.CreateCharacter("Templar");
            tx.text = hero.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            hero = heroSpawner.CreateCharacter("Ranger");
            tx.text = hero.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            hero = heroSpawner.CreateCharacter("OrcWarlord");
            tx.text = hero.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            horde = hordeSpawner.CreateCharacter("Templar");
            tx1.text = horde.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            horde = hordeSpawner.CreateCharacter("Ranger");
            tx1.text = horde.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            horde = hordeSpawner.CreateCharacter("OrcWarlord");
            tx1.text = horde.ToString();
        }

        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            tx.text = hero.Attack();
            tx1.text = horde.Attack();
        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            HealthSystem.GameOver = false;
            HealthSystem.HeroHealth = 200;
            HealthSystem.HordeHealth = 100;
            hero = null;
            horde = null;
            tx.text = "";
            tx1.text = "";
        }
    }
}
