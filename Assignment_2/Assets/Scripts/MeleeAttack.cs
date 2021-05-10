/* (Luke Alcazar) 
 * (MeleeAttack) 
 * (Assignment_2) 
 * (Melee attack for a character) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MeleeAttack : CharacterStrategy
{
    public void Attack()
    {
        Text tx = GameObject.FindGameObjectWithTag("Text2").GetComponent<Text>();
        tx.text = "Attack with a Melee attack";
    }
}
