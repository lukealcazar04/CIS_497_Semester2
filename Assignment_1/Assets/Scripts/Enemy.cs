using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Enemy
{
    public string name;
    public double health;
    public double damage;
    public double moveSpeed;

    public Enemy()
    {
        Debug.Log("I am an abstract enemy with no allegiance");
    }

    public abstract string elementType();

    public abstract void move(int x, int z);

    public abstract void setWeapon(string gun);

    public abstract string getWeapon();
}
