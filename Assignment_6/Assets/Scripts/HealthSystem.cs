/* (Luke Alcazar) 
 * (HealthSystem) 
 * (Assignment 6) 
 * (The basic health system for characters) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class HealthSystem
{
    public static int HeroHealth = 200;
    public static int HordeHealth = 100;
    public static bool GameOver = false;

    public static void gameOver()
    {
        if(HeroHealth <= 0)
        {
            GameOver = true;
        }
        else if(HordeHealth <= 0)
        {
            GameOver = true;
        }
    }
}
