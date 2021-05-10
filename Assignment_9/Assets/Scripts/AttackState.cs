/* (Luke Alcazar) 
 * () 
 * (Assignment 9) 
 * (Attack state subclass for the playerstate) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackState : PlayerState
{
    PlayerAI playerAI;

    public AttackState(PlayerAI playerAI)
    {
        this.playerAI = playerAI;
    }

    public string Attacking()
    {
        return "You are now attacking your specified target!";
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
        return "Can't do that in this state!";
    }

    public string ReturnToIdle()
    {
        return "Can't do that in this state!";
    }
    public string String()
    {
        return "Attack State";
    }
}
