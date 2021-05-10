/* (Luke Alcazar) 
 * (BuffBlessed) 
 * (Assignment 4) 
 * (This is the Decorator for the blessed buff) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuffBlessed : BuffDecorator
{
    Attack weapon;

    public BuffBlessed(Attack weapon)
    {
        this.weapon = weapon;
    }

    public override string GetName()
    {
        return weapon.GetName() + " With Blessed Buff";
    }

    public override int GetDamage()
    {
        return weapon.GetDamage() + 15;
    }
}
