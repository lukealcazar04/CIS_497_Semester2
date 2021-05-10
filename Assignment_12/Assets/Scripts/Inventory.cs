using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : InventoryPart
{
    public List<InventoryPart> inventory = new List<InventoryPart>();

    public override InvItemType GetItem()
    {
        return item;
    }

    public override string toString()
    {
        string st = "Inventory: ";

        for(int i = 0; i < inventory.Count; i++)
        {
            st += inventory[i].toString() + "\n";
        }

        return st;
    }





    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
