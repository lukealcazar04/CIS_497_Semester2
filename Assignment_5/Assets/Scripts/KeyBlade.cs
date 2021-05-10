/*(Luke Alcazar)
 * (KeyBlade)
 * (Assignment5)
 * (Has all the values for KeyBlade weapon)
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyBlade : Weapon
{
    public KeyBlade()
    {
        this.WeaponType = "Keyblade";
        this.DamageType = "Melee";
        this.Damage = 100;
        this.Durability = 50;
    }
}
