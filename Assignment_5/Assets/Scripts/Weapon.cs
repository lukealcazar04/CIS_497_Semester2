/*(Luke Alcazar)
 * (Weapon)
 * (Assignment5)
 * (Base class for the weapons)
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Weapon
{
    
    protected string WeaponType { get; set; }
    protected string DamageType { get; set; }
    protected int Damage { get; set; }
    protected int Durability { get; set; }

    public string Attack()
    {
        Durability--;
        return WeaponType + " does "+ Damage + " " + DamageType + "damage. Weapon has " + Durability + " left";
        
    }

    public override string ToString()
    {
        return "WeaponType: " + WeaponType +"\n"
            + "DamageType: " + DamageType + "\n"
            + "Damage: " + Damage + "\n"
            + "Durability: " + Durability;
    }

}
