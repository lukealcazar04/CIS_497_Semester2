/* (Luke Alcazar) 
 * (IdleState) 
 * (Assignment 9) 
 * (Idle state subclass of Playerstate ) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleState : PlayerState
{
    PlayerAI playerAI;

    public IdleState(PlayerAI playerAI)
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
        return "You are now Idle!";
    }

    public string Mining()
    {
        return "Can't do that in this state!";
    }

    public string Moving()
    {
        return "Can't do that in this state!";
    }

    public string ReturnToIdle()
    {
        return "The player is now stopping what they are doing!";
    }

    public string String()
    {
        return "Idle State";
    }
}
