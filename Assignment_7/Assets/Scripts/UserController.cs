using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserController : MonoBehaviour
{
    public Action action;
    private Command moveCloser;
    private Command moveFurther;
    private Command attack;
    private Command defend;

    public Stack<Command> commandHistory;

    void Start()
    {
        moveCloser = new MoveCloser(action);
        moveFurther = new MoveFurther(action);
        attack = new Attack(action);
        defend = new Defend(action);
        commandHistory = new Stack<Command>();
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Alpha1))
        {
            moveCloser.Execute();
            commandHistory.Push(moveCloser);
        }

        if (Input.GetKey(KeyCode.Alpha2))
        {
            moveFurther.Execute();
            commandHistory.Push(moveFurther);
        }

        if (Input.GetKey(KeyCode.Alpha3))
        {
            attack.Execute();
            commandHistory.Push(attack);
        }

        if (Input.GetKey(KeyCode.Alpha4))
        {
            defend.Execute();
            commandHistory.Push(defend);
        }

        if (Input.GetKey(KeyCode.Alpha0))
        {
            if (commandHistory.Count != 0)
            {
                Command previousCommand = commandHistory.Pop();

                previousCommand.Undo();
            }
        }
    }

}
