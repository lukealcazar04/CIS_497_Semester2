using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack : Command
{
    Action action;
    Stack<Action> actionHistory = new Stack<Action>();

    public Attack(Action action)
    {
        this.action = action;
    }

    public void Execute()
    {
        actionHistory.Push(action);
        action.Attack();
    }

    public void Undo()
    {
        if (actionHistory.Count > 0)
        {
            action = actionHistory.Pop();
        }
    }
}
