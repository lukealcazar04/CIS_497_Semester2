/*(Luke Alcazar)
 * (WeaponFactoryTest)
 * (Assignment5)
 * (This is what allows the player to test out the weapon factory)
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeaponFactoryTest : MonoBehaviour
{
    WeaponFactory factory;
    WeaponSpawner spawner;
    Weapon weapon;
    Text tx;

    void Start()
    {
        factory = new WeaponFactory();
        spawner = new WeaponSpawner(factory);
        tx = GameObject.FindGameObjectWithTag("WeaponText").GetComponent<Text>();
    }

    public void MakeWeapon(string str)
    {
        weapon = spawner.SpawnWeapon(str);
        Debug.Log("MakeWeapon check");
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)) 
        {
            MakeWeapon("Sword");
            tx.text = weapon.ToString();
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            MakeWeapon("Keyblade");
            tx.text = weapon.ToString();
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            MakeWeapon("Bow");
            tx.text = weapon.ToString();
        }
        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            MakeWeapon("Wand");
            tx.text = weapon.ToString();
        }
        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            tx.text = weapon.Attack();
        }
    }
}
