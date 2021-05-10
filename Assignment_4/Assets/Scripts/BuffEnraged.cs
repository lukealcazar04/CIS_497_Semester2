/* (Luke Alcazar) 
 * (BuffEnraged) 
 * (Assignment 4) 
 * (This is the decorator for the enraged buff) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuffEnraged : BuffDecorator
{
    Attack weapon;

    public BuffEnraged(Attack weapon)
    {
        this.weapon = weapon;
    }

    public override string GetName()
    {
        return weapon.GetName() + " With Enraged Buff";
    }

    public override int GetDamage()
    {
        return weapon.GetDamage() + 20;
    }
}
