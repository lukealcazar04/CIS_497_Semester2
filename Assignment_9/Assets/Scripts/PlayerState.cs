/* (Luke Alcazar) 
 * (PlayerState) 
 * (Assignment 9) 
 * (interface for PlayerState that has lots of methods) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface PlayerState
{
    string ReturnToIdle();
    string Mining();
    string Attacking();
    string Moving();
    string Idle();
    string Defend();
    string String();
}
