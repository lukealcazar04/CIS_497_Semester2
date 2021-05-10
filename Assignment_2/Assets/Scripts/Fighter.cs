/* (Luke Alcazar) 
 * (Fighter) 
 * (Assignment_2) 
 * (Fighter character) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Fighter : Character
{
    public Fighter()
    {
        ACharacterStrategy = new MeleeAttack();
    }
}
