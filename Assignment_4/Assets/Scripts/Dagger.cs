/* (Luke Alcazar) 
 * (Dagger) 
 * (Assignment 4) 
 * (This class holds the basic stats for the dagger) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dagger : Attack
{
    public Dagger()
    {
        this.name = "Dagger";
    }

    public override int GetDamage()
    {
        return 10;
    }
}
