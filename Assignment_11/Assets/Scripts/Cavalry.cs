/* (Luke Alcazar) 
 * (Cavalry) 
 * (Assignment 11) 
 * (Class that allows us to create and use cavalry methods) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cavalry
{
    public string current;

    public Cavalry()
    {
        current = "Cavalry on Standby";
    }

    public void BeginCharge()
    {
        current = "Charging!";
    }

    public void EndCharge()
    {
        current = "Ending Charge!";
    }

    public void Reset()
    {
        current = "Cavalry on Standby";
    }
}
