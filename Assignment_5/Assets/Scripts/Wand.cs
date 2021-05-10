/*(Luke Alcazar)
 * (Wand)
 * (Assignment5)
 * (Has all values for wand weapon)
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wand : Weapon
{
    public Wand()
    {
        this.WeaponType = "Wand";
        this.DamageType = "Ranged";
        this.Damage = 75;
        this.Durability = 5;
    }
}
