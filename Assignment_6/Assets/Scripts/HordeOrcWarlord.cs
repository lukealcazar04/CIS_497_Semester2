/* (Luke Alcazar) 
 * (HordeOrcWarlord) 
 * (Assignment 6) 
 * (Basic stats when creating a Horde Orc Warlord) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HordeOrcWarlord : Character
{
    public HordeOrcWarlord()
    {
        this.Faction = FactionType.HORDE;
        this.Variant = "OrcWarlord";
        this.level = 15;
        this.damage = 35;
    }
}
