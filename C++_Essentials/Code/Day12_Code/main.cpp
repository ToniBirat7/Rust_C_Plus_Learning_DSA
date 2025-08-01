#include "inventory.h"
#include <iostream>
using namespace std;

int main()
{
  // Instantiate an Object
  Inventory myInventory(5); // Overloaded constructor with capacity of 5

  // Display Current Inventory
  cout << "Current Contents are : " << endl;
  cout << endl;

  myInventory.displayItems();

  // Add elements
  // myInventory += "Birat"; // Using overloaded += operator
  // myInventory += "Biratt";
  // myInventory += "Birattt";
  // myInventory += "Biratttt";
  // myInventory += "Birattttt"; // This will not be added as it exceeds capacity

  myInventory += string("Sword") += string("Shield") += "Potion";

  cout << "Added to Full Capacity" << endl;

  // Add another item when full
  try
  {
    cout << "Trying to add beyond capacity \n";
    myInventory += "Birattttt"; // This will not be added as it exceeds capacity
  }
  catch (const runtime_error &e)
  {
    cout << "Error: " << e.what() << endl;
  }

  // Remove an item
  cout << "Remove Birat" << endl;
  myInventory -= "Birattttt"; // Using overloaded -= operator

  // Display an item count
  cout << "There are total of : " << myInventory.getItemCount() << endl;

  // Access item by index
  cout << "Accessing Birat by Index" << endl;
  cout << "The item in Index 0 is : " << myInventory[0] << endl;

  // Access out of range
  try
  {
    cout << "Accessing the Element of Index 10" << endl;
    string item = myInventory[10]; // Using overloaded [] operator
  }
  catch (const out_of_range &e)
  {
    cout << "Error : " << e.what() << endl;
  }

  // Display after CRUD
  cout << "Content Afer CRUD : " << endl;
  cout << endl;
  myInventory.displayItems();

  return 0;
}