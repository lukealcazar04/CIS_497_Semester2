/* (Luke Alcazar) 
 * (Observer) 
 * (Assignment 3) 
 * (Basic Observer interface) */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Observer 
{
    void UpdateData(double damage, double drawTime, bool attacking);
}
