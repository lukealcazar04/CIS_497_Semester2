using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Simulator : MonoBehaviour
{

    public List<Enemy> enemiesList = new List<Enemy>();
    public List<shoot> shootList = new List<shoot>();

    void Start()
    {
        enemiesList.Add(new Taken());
        enemiesList.Add(new Taken());
        enemiesList.Add(new Fallen());
        enemiesList.Add(new Fallen());
        enemiesList.Add(new Scorn());
        shootList.Add(new Taken());
        shootList.Add(new Taken());
        shootList.Add(new Fallen());  
        shootList.Add(new Fallen());
        shootList.Add(new Scorn());
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            foreach (Enemy enemy in enemiesList)
            {
                enemy.elementType();
            }
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            foreach (shoot enemy in shootList)
            {
                enemy.shoot();
            }
        }
    }
}
