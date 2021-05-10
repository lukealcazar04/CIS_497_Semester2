/* (Luke Alcazar) 
 * (Wizard) 
 * (Assignment_2) 
 * (Wizard Character) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Wizard : Character
{
    public Wizard()
    {
        ACharacterStrategy = new RangedAttack();
    }
}
