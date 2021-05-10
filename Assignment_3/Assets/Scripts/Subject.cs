/* (Luke Alcazar) 
 * (Subject) 
 * (Assignment 3) 
 * (This is a base interface for the bow stats) */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Subject
{
    void RegisterObserver(Observer observer);
    void RemoveObserver(Observer observer);
    void NotifyObservers();
}
