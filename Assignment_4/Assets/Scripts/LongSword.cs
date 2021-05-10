/* (Luke Alcazar) 
 * (LongSword) 
 * (Assignment 4) 
 * (This holds the basic stats for LongSword) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LongSword : Attack
{
    public LongSword()
    {
        this.name = "LongSword";
    }

    public override int GetDamage()
    {
        return 20;
    }
}
