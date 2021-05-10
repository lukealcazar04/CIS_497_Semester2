using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : InventoryPart
{

    public int amount;

    public int GetAmount()
    {
        return amount;
    }

    public override InvItemType GetItem()
    {
        return item;
    }

    public override string toString()
    {
        return GetAmount() + " " + GetItem();
    }

}
