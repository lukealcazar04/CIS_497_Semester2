/*(Luke Alcazar)
 * (Sword)
 * (Assignment5)
 * (Has all values for Sword Weapon)
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sword : Weapon
{
    public Sword()
    {
        this.WeaponType = "Sword";
        this.DamageType = "Melee";
        this.Damage = 25;
        this.Durability = 25;
    }
}
