/* (Luke Alcazar) 
 * (SiegeEngine) 
 * (Assignment 11) 
 * (Class that allows us to build and use siege engines) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SiegeEngine
{
    public string current;

    public SiegeEngine()
    {
        current = "Siege Engines on Standby";
    }

    public void BeginSieging()
    {
        current = "Beginning to siege! Fire!";
    }

    public void EndSieging()
    {
        current = "Stopping sieging! Halt Fire!";
    }

    public void Reset()
    {
        current = "Siege Engines on Standby";
    }
}
