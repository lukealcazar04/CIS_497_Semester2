/* (Luke Alcazar) 
 * (MoveState) 
 * (Assignment 9) 
 * (Move state subclass of PlayerState) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveState : PlayerState
{
    PlayerAI playerAI;

    public MoveState(PlayerAI playerAI)
    {
        this.playerAI = playerAI;
    }

    public string Attacking()
    {
        return "Can't do that in this state!";
    }

    public string Defend()
    {
        return "Can't do that in this state!";
    }

    public string Idle()
    {
        return "Can't do that in this state!";
    }

    public string Mining()
    {
        return "Can't do that in this state!";
    }

    public string Moving()
    {
        return "You are now moving to the specified location!";
    }

    public string ReturnToIdle()
    {
        return "Can't do that in this state!";
    }

    public string String()
    {
        return "Move State";
    }
}
