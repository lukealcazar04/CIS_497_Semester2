using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveFurther : Command
{

    Action action;
    Stack<Action> actionHistory = new Stack<Action>();

    public MoveFurther(Action action)
    {
        this.action = action;
    }

    public void Execute()
    {
        actionHistory.Push(action);
        action.MoveFurther();
    }

    public void Undo()
    {
        if(actionHistory.Count > 0)
        {
            action = actionHistory.Pop();
        }
    }

}
