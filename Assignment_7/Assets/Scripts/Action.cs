using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Action : MonoBehaviour
{
    public Text tx1;
    public string actionName = "None";

    void Start()
    {
        tx1 = GameObject.FindGameObjectWithTag("Text").GetComponent<Text>();
    }

    public string ActionName()
    {
        return actionName;
    }

    public string MoveCloser()
    {
        
        tx1.text = "You move closer to the enemy";
        return "movecloser";
    }

    public string MoveFurther()
    {
        actionName = "movefurther";
        tx1.text = "You move further from the enemy";
    }

    public string Attack()
    {
        actionName = "attack";
        tx1.text = "You now attack";
    }

    public string Defend()
    {
        actionName = "defend";
        tx1.text = "You now defend";
    }

}
