/* (Luke Alcazar) 
 * (HordeRanger) 
 * (Assignment 6) 
 * (Basic stats when creating a Horde Ranger) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HordeRanger : Character
{
    public HordeRanger()
    {
        this.Faction = FactionType.HORDE;
        this.Variant = "Ranger";
        this.level = 20;
        this.damage = 45;
    }
}
