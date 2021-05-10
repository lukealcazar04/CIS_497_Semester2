/* (Luke Alcazar) 
 * (HeroRanger) 
 * (Assignment 6) 
 * (Basic stats when creating a Hero Ranger) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroRanger : Character
{
    public HeroRanger()
    {
        this.Faction = FactionType.HERO;
        this.Variant = "Ranger";
        this.level = 25;
        this.damage = 60;
    }
}
