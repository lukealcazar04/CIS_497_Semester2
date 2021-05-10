/* (Luke Alcazar) 
 * (HordeTemplar) 
 * (Assignment 6) 
 * (Basic stats when creating a Horde Templar) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HordeTemplar : Character
{
    public HordeTemplar()
    {
        this.Faction = FactionType.HORDE;
        this.Variant = "Templar";
        this.level = 10;
        this.damage = 25;
    }
}
