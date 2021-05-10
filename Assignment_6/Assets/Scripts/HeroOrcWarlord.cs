/* (Luke Alcazar) 
 * (HeroOrcWarlord) 
 * (Assignment 6) 
 * (Basic stats for creating a Hero OrcWarlord) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroOrcWarlord : Character
{
    public HeroOrcWarlord()
    {
        this.Faction = FactionType.HERO;
        this.Variant = "OrcWarlord";
        this.level = 20;
        this.damage = 50;
    }
}
