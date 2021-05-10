/* (Luke Alcazar) 
 * (HeroCreator) 
 * (Assignment 6) 
 * (Hero creator factory) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroCreator : CharacterCreator
{
    public override Character CreateCharacter(string name)
    {
        Character hero = null;

        if (name.Equals("Templar"))
        {
            hero = new HeroTemplar();
        }
        else if (name.Equals("Ranger"))
        {
            hero = new HeroRanger();
        }
        else if (name.Equals("OrcWarlord"))
        {
            hero = new HeroOrcWarlord();
        }

        return hero;
    }
}
