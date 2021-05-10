/* (Luke Alcazar) 
 * (Mining) 
 * (Assignment 6) 
 * (Mining subclass of skill tree) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mining : SkillTree
{
    private bool Levelable;

    public Mining()
    {
        this.level = 0;
    }

    public override string ToString()
    {
        if (this.level == 10)
        {
            return "Mining lvl: " + this.level + "(Max Level!)";
        }
        return "Mining lvl: " + this.level;
    }

    public override void Level()
    {
        this.level++;
    }


    public override bool IsLevelable()
    {
        if (this.level < 10)
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
