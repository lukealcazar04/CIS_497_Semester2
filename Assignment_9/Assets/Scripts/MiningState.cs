/* (Luke Alcazar) 
 * (MiningState) 
 * (Assignment 9) 
 * (Mining state subclass of PlayerState) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiningState : PlayerState
{
    PlayerAI playerAI;

    public MiningState(PlayerAI playerAI)
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
        return "You are now mining at your location!";
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
        return "Mining State";
    }
}
