using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponFactory : MonoBehaviour
{
    Weapon weapon = null;

    public Weapon CreateWeapon(string type)
    {
        if (type.Equals("Bow"))
        {
            weapon = new Bow();
        }
        else if (type.Equals("Sword"))
        {
            weapon = new Sword();
        }
        else if (type.Equals("Keyblade"))
        {
            weapon = new KeyBlade();
        }
        else if (type.Equals("Wand"))
        {
            weapon = new Wand();
        }
        return weapon;
    }
        
}
