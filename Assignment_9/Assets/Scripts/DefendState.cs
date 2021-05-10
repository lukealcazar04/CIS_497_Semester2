/* (Luke Alcazar) 
 * (DefendState) 
 * (Assignment 9) 
 * (Defend state subclass of PlayerState) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefendState : PlayerState
{
    PlayerAI playerAI;

    public DefendState(PlayerAI playerAI)
    {
        this.playerAI = playerAI;
    }

    public string Attacking()
    {
        return "Can't do that in this state!";
    }

    public string Defend()
    {
        return "You defend!";
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
        return "Can't do that in this state!";
    }

    public string ReturnToIdle()
    {
        return "Can't do that in this state!";
    }

    public string String()
    {
        return "Defend State";
    }
}
