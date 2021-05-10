/* (Luke Alcazar) 
 * (Attack) 
 * (Assignment 4) 
 * (Abstract class for basic attacks and stats) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Attack
{
    public string name = "Weapon";

    public virtual string GetName()
    {
        return name;
    }

    public abstract int GetDamage();
}
