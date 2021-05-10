/* (Luke Alcazar) 
 * (HordeCreator) 
 * (Assignment 6) 
 * (Horde Factory Creator) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HordeCreator : CharacterCreator
{
    public override Character CreateCharacter(string name)
    {
        Character horde = null;

        if (name.Equals("Templar"))
        {
            horde = new HordeTemplar();
        }
        else if (name.Equals("Ranger"))
        {
            horde = new HordeRanger();
        }
        else if (name.Equals("OrcWarlord"))
        {
            horde = new HordeOrcWarlord();
        }

        return horde;
    }
}
