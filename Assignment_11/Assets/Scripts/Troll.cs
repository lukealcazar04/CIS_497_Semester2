/* (Luke Alcazar) 
 * (Troll) 
 * (Assignment 11) 
 * (Class that allows us to create and use trolls) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Troll
{
    public string current;

    public Troll()
    {
        current = "Troll on Standby";
    }

    public void PushEngines()
    {
        current = "Pushing Siege Engines!";
    }

    public void HaltEngines()
    {
        current = "Stopping pushing Siege Engines!";
    }

    public void Reset()
    {
        current = "Orcs on Standby";
    }
}
