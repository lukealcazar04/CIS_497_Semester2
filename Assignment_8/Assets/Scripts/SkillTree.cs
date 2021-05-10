/* (Luke Alcazar) 
 * (SkillTree) 
 * (Assignment 6) 
 * (abstract class skilltree that has base methods for all skills) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SkillTree
{
    public int level { get; set; }
    public void DoThings()
    {
        if (IsLevelable())
        {
            Level();
        }
    }

    string toString()
    {
        return (this.GetType() + ": " + level);
    }

    public abstract void Level();

    public virtual bool IsLevelable()
    {
        return false;
    }
    
}
