/* (Luke Alcazar) 
 * (CharacterCreator) 
 * (Assignment 6) 
 * (Base Factory that allows for character creation) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CharacterCreator
{
    public abstract Character CreateCharacter(string name);

    public Character CharacterMaker(string name)
    {
        Character character;
        character = CreateCharacter(name);

        return character;
    }
}
