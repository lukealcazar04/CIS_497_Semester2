/* (Luke Alcazar) 
 * (BowStats) 
 * (Assignment 3) 
 * (This uses observers to change and then update the bows statistics) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BowStats : MonoBehaviour , Subject
{
    private List<Observer> obs = new List<Observer>();

    private bool attacking = false;
    private double damage = 25;
    private double drawTime = 500;

    public Text tx1;
    public Text tx2;
    public Button button1;
    public Button button2;
    public Button button3;
    public Button button4;

    void Start()
    {
        tx1 = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
        tx2 = GameObject.FindGameObjectWithTag("TestText").GetComponent<Text>();
        button1 = GameObject.FindGameObjectWithTag("Button1").GetComponent<Button>();
        button2 = GameObject.FindGameObjectWithTag("Button2").GetComponent<Button>();
        button3 = GameObject.FindGameObjectWithTag("Button3").GetComponent<Button>();
        button4 = GameObject.FindGameObjectWithTag("Button4").GetComponent<Button>();
    }

    public void RegisterObserver(Observer observer)
    {
        obs.Add(observer);
        observer.UpdateData(damage, drawTime, attacking);
    }

    public void RemoveObserver(Observer observer)
    {
        if (obs.Contains(observer))
        {
            obs.Remove(observer);
        }
    }

    public void NotifyObservers()
    {
        foreach(Observer observer in obs)
        {
            observer.UpdateData(damage, drawTime, attacking);
        }
    }

    public void Attacking()
    {
        attacking = !attacking;
        NotifyObservers();
    }

    public void incDmg()
    {
        damage += 5;
        drawTime += 0.1;
        NotifyObservers();
    }

    public void decDmg()
    {
        damage -= 5;
        if(damage <= 0)
        {
            damage = 0;
        }
        drawTime -= 100;
        if (drawTime <= 100)
        {
            drawTime = 0;
        }
        
        NotifyObservers();
    }

    private void AttackingString()
    {
        if (attacking == true)
        {
            tx1.text = "You are attacking and dealing " + damage + " damage with a " + drawTime + " drawtime.";
        }
        else
        {
            tx1.text = "You are not attacking but would deal " + damage + " damage with a " + drawTime + " drawtime.";
        }
    }

    private void DmgString()
    {
        tx1.text = "Damage is now " + damage + " and draw time is now " + drawTime + " seconds.";
    }

    private void Reset()
    {
        attacking = false;
        damage = 25;
        NotifyObservers();
        tx1.text = "You are not attacking but would deal " + damage + " damage with a " + drawTime + " drawtime.";
    }

    private void Update()
    {
/*
        button1.onClick.AddListener(Attacking);
        button1.onClick.AddListener(AttackingString);
        button2.onClick.AddListener(Reset);
        button3.onClick.AddListener(incDmg);
        button3.onClick.AddListener(DmgString);
        button4.onClick.AddListener(decDmg);
        button4.onClick.AddListener(DmgString);*/


       if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            Attacking();
            if (attacking == true)
            {
                tx1.text = "You are attacking and dealing " + damage + " damage with a " + drawTime + " drawtime.";
            }
            else
            {
                tx1.text = "You are not attacking but would deal " + damage + " damage with a " + drawTime + " drawtime.";
            }
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            incDmg();
            tx1.text = "Damage is now " + damage + " and draw time is now " + drawTime + " seconds.";
        }

        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            decDmg();
            tx1.text = "Damage is now " + damage + " and draw time is now " + drawTime + " seconds.";
        }

        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            attacking = false;
            damage = 25;
            NotifyObservers();
            tx1.text = "You are not attacking but would deal " + damage + " damage with a " + drawTime + " drawtime.";
        }
    }

}
