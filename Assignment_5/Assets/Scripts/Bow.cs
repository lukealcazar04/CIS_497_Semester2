/*(Luke Alcazar)
 * (Bow)
 * (Assignment5)
 * (Has all the values for the bow)
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bow : Weapon
{
    public Bow()
    {
        this.WeaponType = "Bow";
        this.DamageType = "Ranged";
        this.Durability = 10;
        this.Damage = 50;
    }
}
