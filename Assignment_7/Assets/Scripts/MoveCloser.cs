using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveCloser : Command
{
    Action action;
    Stack<Command> actionHistory = new Stack<Command>();

    public MoveCloser(Action action)
    {
        this.action = action;
    }

    public void Execute()
    {
        actionHistory.Push(action);
        action.MoveCloser();
        
    }

    public void Undo()
    {
        if (actionHistory.Count > 0)
        {
            action = actionHistory.Pop();
        }
    }
}
