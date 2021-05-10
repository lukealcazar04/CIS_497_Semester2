/* (Luke Alcazar) 
 * (Bow) 
 * (Assignment 3) 
 * (Bow script that allows the observers to update the bows stats) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bow : MonoBehaviour, Observer
{
    double damage;
    bool attacking;
    private double drawTime;

    public BowStats bowStats;

    public Text tx;

    void Start()
    {
        bowStats.RegisterObserver(this);
        tx = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
    }

    public void UpdateData(double damage, double drawTime, bool attacking)
    {

        this.damage = damage;
        this.attacking = attacking;
        this.drawTime = drawTime;
    }
}
