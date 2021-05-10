/* (Luke Alcazar) 
 * (Character) 
 * (Assignment 6) 
 * (The basis for using a basic character that all types of characters can use) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]

public class Character
{
    public enum FactionType { HERO, HORDE }
    public FactionType Faction;
    public string Variant;
    public int level;
    public int damage;

    public string Attack()
    {
        string str = "";
        if (!HealthSystem.GameOver)
        {
            str = "Level: " + this.level + " " + this.Variant + " attacks and deals " + this.damage + " damage.";

            if(this.Faction == FactionType.HERO)
            {
                HealthSystem.HordeHealth -= damage;
                str = str + "\nEnemy took " + damage + " damage.\n Enemy health is now " + HealthSystem.HordeHealth;
            }
            else if(this.Faction == FactionType.HORDE)
            {
                HealthSystem.HeroHealth -= damage;
                str = str + "\nYou took " + damage + " damage.\n Your health is now " + HealthSystem.HeroHealth;
            }
            
        }

        if (HealthSystem.GameOver = true && HealthSystem.HeroHealth <= 0)
        {
            return "Hero is defeated! You lose!";
        }
        if (HealthSystem.GameOver = true && HealthSystem.HordeHealth <= 0)
        {
            return "Enemy is defeated! You win!";
        }
        return str;
    }

    public override string ToString()
    {
        return "Character of " + this.Faction + " faction of type " + this.Variant + " and level " + this.level
            + " and deals " + this.damage + " damage";
    }

}
