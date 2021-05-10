/* (Luke Alcazar) 
 * (PlayerAI) 
 * (Assignment 9) 
 * (PlaerAI allows the player to use the states for the player and output to text) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerAI : MonoBehaviour
{
    public PlayerState idleState { get; set; }
    public PlayerState moveState { get; set; }
    public PlayerState miningState { get; set; }
    public PlayerState attackState { get; set; }
    public PlayerState defendState { get; set; }

    public PlayerState state { get; set; }

    public Text tx1;
    public Text tx2;

    void Start()
    {
        idleState = new IdleState(this);
        moveState = new MoveState(this);
        miningState = new MiningState(this);
        attackState = new AttackState(this);
        defendState = new DefendState(this);

        state = idleState;

        tx1 = GameObject.FindGameObjectWithTag("State").GetComponent<Text>();
        tx2 = GameObject.FindGameObjectWithTag("State2").GetComponent<Text>();
    }

    void Update()
    {
        tx1.text = state.String();

        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            this.state = idleState;
            tx2.text = state.ReturnToIdle();
            
        }

        if (Input.GetKeyDown(KeyCode.Alpha1) && this.state == idleState)
        {
            this.state = attackState;
            tx2.text = state.Attacking();
            
        }
        else if(Input.GetKeyDown(KeyCode.Alpha1) && this.state != idleState)
        {
            tx2.text = "You must return to Idle.";
        }

        if (Input.GetKeyDown(KeyCode.Alpha2) && this.state == idleState)
        {
            this.state = defendState;
            tx2.text = state.Defend();
            
        }
        else if (Input.GetKeyDown(KeyCode.Alpha2) && this.state != idleState)
        {
            tx2.text = "You must return to Idle.";
        }

        if (Input.GetKeyDown(KeyCode.Alpha3) && this.state == idleState)
        {
            this.state = miningState;
            tx2.text = state.Mining();
            
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3) && this.state != idleState)
        {
            tx2.text = "You must return to Idle.";
        }

        if (Input.GetKeyDown(KeyCode.Alpha4) && this.state == idleState)
        {
            this.state = moveState;
            tx2.text = state.Moving();
            
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4) && this.state != idleState)
        {
            tx2.text = "You must return to Idle.";
        }
    }
}
