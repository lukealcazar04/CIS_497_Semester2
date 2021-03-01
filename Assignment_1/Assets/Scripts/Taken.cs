using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Taken : Enemy, shoot, teleport
{
    public void shoot()
    {
        Debug.Log("Shoots their weapon at something");
    }

    public void teleport(int x, int y, int z)
    {
        Debug.Log("Teleports to the target location");
    }

    public override string elementType()
    {
        Debug.Log("Returns the enemies elemental shield type");
        return "Void";
    }

    public override void move(int x, int z)
    {
        Debug.Log("Moves the enemy to the specified location");
    }

    public override void setWeapon(string gun)
    {
        Debug.Log("Sets the enemies current weapon");
    }

    public override string getWeapon()
    {
        Debug.Log("Gets the enemies current weapon");
        return "The little one";
    }
}
