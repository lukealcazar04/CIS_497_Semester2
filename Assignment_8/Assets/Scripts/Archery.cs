/* (Luke Alcazar) 
 * (Archery) 
 * (Assignment 6) 
 * (Archery class that creates new methods for the Archery class as well as implement Skill tree methods) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Archery : SkillTree
{
    private bool Levelable;

    public Archery()
    {
        this.level = 0;
    }

    public override string ToString()
    {
        if (this.level == 20)
        {
            return "Archery lvl: " + this.level + "(Max Level!)";
        }
        return "Archery lvl: " + this.level;
    }

    public override void Level()
    {
        this.level++;
    }

    public override bool IsLevelable()
    {
        if(this.level < 20)
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
