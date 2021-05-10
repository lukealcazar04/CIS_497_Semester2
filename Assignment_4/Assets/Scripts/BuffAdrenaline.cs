/* (Luke Alcazar) 
 * (BuffAdrenaline) 
 * (Assignment 4) 
 * (This is the decorator for the Adrenaline Buff) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuffAdrenaline : BuffDecorator
{
    Attack weapon;

    public BuffAdrenaline(Attack weapon)
    {
        this.weapon = weapon;
    }

    public override string GetName()
    {
        return weapon.GetName() + " With Adrenaline Buff"; 
    }

    public override int GetDamage()
    {
        return weapon.GetDamage() + 10;
    }
}
