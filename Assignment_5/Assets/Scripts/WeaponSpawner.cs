/*(Luke Alcazar)
 * (WeaponSpawner)
 * (Assignment5)
 * (This is what creates the wepaon and spawns in all the weapons)
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponSpawner : MonoBehaviour
{
    public WeaponFactory weaponFactory;
    public Weapon weapon;

    public WeaponSpawner(WeaponFactory weaponFactory)
    {
        this.weaponFactory = weaponFactory;
    }

    public Weapon SpawnWeapon(string type)
    {
        weapon = weaponFactory.CreateWeapon(type);
        return weapon;
    }

}
