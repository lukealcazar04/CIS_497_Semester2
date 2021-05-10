/* (Luke Alcazar) 
 * (SiegeFacade) 
 * (Assignment 11) 
 * (Main facade class that allows for the usage of all the other classes) */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SiegeFacade
{
    Cavalry cavalry;
    Orc orc;
    Troll troll;
    SiegeEngine siegeEngine;
    string str;

    public SiegeFacade(Cavalry cavalry, Orc orc, Troll troll, SiegeEngine siegeEngine)
    {
        this.cavalry = cavalry;
        this.orc = orc;
        this.troll = troll;
        this.siegeEngine = siegeEngine;
    }

    public string GetStatus()
    {
        str = "";
        str += "Cavalry: " + cavalry.current + "\n";
        str += "Orc: " + orc.current + "\n";
        str += "Troll: " + troll.current + "\n";
        str += "Siege Engines: " + siegeEngine.current + "\n";
        return str;
    }

    public string BeginSiege()
    {
        cavalry.BeginCharge();
        orc.FormRanks();
        troll.PushEngines();
        siegeEngine.BeginSieging();
        return GetStatus();
    }


    public string HaltSieging()
    {
        cavalry.EndCharge();
        orc.BreakRanks();
        troll.HaltEngines();
        siegeEngine.EndSieging();
        return GetStatus();
    }

    public string Reset()
    {
        cavalry.Reset();
        orc.Reset();
        troll.Reset();
        siegeEngine.Reset();
        return GetStatus();
    }
}
