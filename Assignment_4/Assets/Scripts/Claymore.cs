/* (Luke Alcazar) 
 * (Claymore) 
 * (Assignment 4) 
 * (This class holds the basic stats for the claymore) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Claymore : Attack
{
    public Claymore()
    {
        this.name = "Claymore";
    }

    public override int GetDamage()
    {
        return 25;
    }
}
