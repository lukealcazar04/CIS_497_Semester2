using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fallen : Enemy, shoot

{
    

    public void shoot()
    {
        Debug.Log("Shoots their weapon at something");
    }

    public override string elementType()
    {
        Debug.Log("Sets the elemental shield of the enemy");
        return "Arc";
    }

    public override void move(int x, int z)
    {
        Debug.Log("Allows the nemy to move to a specific spot");
    }

    public override void setWeapon(string gun)
    {
        Debug.Log("Sets the enemies weapon");
    }

    public override string getWeapon()
    {
        Debug.Log("Gets the current weapon the enemy is using");
        return "a big gun";
    }

}
