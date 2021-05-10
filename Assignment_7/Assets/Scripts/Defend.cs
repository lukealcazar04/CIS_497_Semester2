using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Defend : Command
{
    Action action;
    Stack<Action> actionHistory = new Stack<Action>();
    Command command;

    public Defend(Action action)
    {
        this.action = action;
    }

    public void Execute()
    {
        actionHistory.Push(action);
        action.Defend();
    }

    public void Undo()
    {
        if (actionHistory.Count > 0)
        {
            action = actionHistory.Pop();
        }
    }
}
