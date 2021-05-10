/* (Luke Alcazar) 
 * (Orc) 
 * (Assignment 11) 
 * (Allows us to create and use orcs) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orc
{
    public string current;

    public Orc()
    {
        current = "Orcs on Standby";
    }

    public void FormRanks()
    {
        current = "Forming Ranks! Forward March!";
    }

    public void BreakRanks()
    {
        current = "Breaking Ranks! Charge!";
    }

    public void Reset()
    {
        current = "Orcs on Standby";
    }
}
