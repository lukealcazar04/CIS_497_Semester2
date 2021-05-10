/* (Luke Alcazar) 
 * (Paladin) 
 * (Assignment_2) 
 * (Paladin Character) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Paladin : Character
{
    public Paladin()
    {
        ACharacterStrategy = new MeleeAttack();
    }

}