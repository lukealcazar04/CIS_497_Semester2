/* (Luke Alcazar) 
 * (Character) 
 * (Assignment_2) 
 * (Parent class for different types of characters) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Character
{

    public string type;
    public CharacterStrategy ACharacterStrategy { get; set; }

    public virtual void DoAttack() { ACharacterStrategy.Attack(); }



}