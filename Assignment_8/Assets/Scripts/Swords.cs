/* (Luke Alcazar) 
 * (Swords) 
 * (Assignment 6) 
 * (Swords subclass of skill tree) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swords : SkillTree
{
    private bool Levelable;

    public Swords()
    {
        this.level = 0;
    }

    public override string ToString()
    {
        if (this.level == 15)
        {
            return "Swords lvl: " + this.level + "(Max Level!)";
        }
        return "Swords lvl: " + this.level;
    }

    public override void Level()
    {
        this.level++;
    }


    public override bool IsLevelable()
    {
        if (this.level < 15)
        {
            Levelable = true;
        }
        else
        {
            Levelable = false;
        }
        return Levelable;
    }
}
