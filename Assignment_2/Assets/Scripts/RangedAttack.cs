/* (Luke Alcazar) 
 * (RangedAttack) 
 * (Assignment_2) 
 * (Ranged Attack for a character) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RangedAttack : CharacterStrategy
{

    public void Attack()
    {
        Text tx = GameObject.FindGameObjectWithTag("Text2").GetComponent<Text>();
        tx.text = "Attack with a ranged attack";
    }

}
