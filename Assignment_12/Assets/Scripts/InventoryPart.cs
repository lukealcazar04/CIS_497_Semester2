using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class InventoryPart: MonoBehaviour
{
    public enum InvItemType { Potion, Weapon, Gold}
    public InvItemType item;
    public string description;

    public abstract InvItemType GetItem();
    public abstract string toString();

    void Start()
    {
        
    }

    
    void Update()
    {
        
    }
}
