/* (Luke Alcazar) 
 * (FacadeTester) 
 * (Assignment 11) 
 * (This script allows us to test the facade pattern that we have created) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FacadeTester : MonoBehaviour
{
    SiegeFacade facade;
    Cavalry c;
    Orc o;
    Troll t;
    SiegeEngine se;

    Text output;
    void Start()
    {
        output = GameObject.FindGameObjectWithTag("output").GetComponent<Text>();

        c = new Cavalry();
        o = new Orc();
        t = new Troll();
        se = new SiegeEngine();
        facade = new SiegeFacade(c, o, t, se);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            output.text = facade.GetStatus();
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            output.text = facade.BeginSiege();
        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            output.text = facade.HaltSieging();
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            output.text = facade.Reset();
        }
    }
}
