/* (Luke Alcazar) 
 * (HeroTemplar) 
 * (Assignment 6) 
 * (Basic stats when creating a Hero Templar) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroTemplar : Character
{
    public HeroTemplar()
    {
        this.Faction = FactionType.HERO;
        this.Variant = "Templar";
        this.level = 15;
        this.damage = 40;
    }
}
