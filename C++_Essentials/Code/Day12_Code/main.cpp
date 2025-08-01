#include "inventory.h"
#include <iostream>

int main()
{
  Inventory inv(5); // Create an inventory with a capacity of 5

  inv.addItem("Sword");
  inv.addItem("Shield");
  inv.addItem("Health Potion");
  inv.addItem("Mana Potion");
  inv.addItem("Bow");
  inv.addItem("Arrow"); // This should trigger the inventory full message

  inv.displayItems();

  inv.removeItem("Health Potion");
  inv.displayItems();

  return 0;
}