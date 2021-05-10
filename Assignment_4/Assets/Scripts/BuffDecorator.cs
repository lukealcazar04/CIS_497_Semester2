/* (Luke Alcazar) 
 * (BuffDecorator) 
 * (Assignment 4) 
 * (Basic abstract Decorator Class) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BuffDecorator : Attack
{
    public abstract override string GetName();
}
