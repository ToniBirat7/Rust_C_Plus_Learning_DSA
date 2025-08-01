#include "inventory.h"
#include <iostream>
#include <vector>
#include <algorithm> // For searching

// Rest of the definitions
using namespace std;

Inventory::Inventory() : capacity(10) // Default constructor
{
  items = new vector<string>(); // The pointer is stored in the Stack, and Vector object is stored in the Heap
}

Inventory::Inventory(int capacity_i) : capacity(capacity_i) // Overloaded constructor
{
  items = new vector<string>(); // Initialize the vector
}

Inventory::~Inventory() // Destructor
{
  delete items;
}

// Overloaded with +=
Inventory &Inventory::operator+=(const string &item) // Add item to the inventory
{
  if (items->size() < capacity)
  {
    items->push_back(item);
  }
  else
  {
    cout << "Inventory is full, cannot add " << item << endl;
  }

  return *this;
}

// Overloaded with -=
Inventory &Inventory::operator-=(const string &item) // Remove item from the inventory
{
  auto it = find(items->begin(), items->end(), item);
  if (it != items->end())
  {
    items->erase(it);
  }
  else
  {
    cout << "Item " << item << " not found in inventory." << endl;
  }

  return *this;
}

int Inventory::getItemCount() const // Get item count
{
  return items->size();
}

void Inventory::displayItems() const // Display all items
{
  cout << "Inventory items:" << endl;
  for (const auto &item : *items)
  {
    cout << "- " << item << endl;
  }
}

// Overload with [] to access the element
string Inventory::operator[](int index) const
{ // Const correctness is used to prevent the method from modifying any properties and methods
  if (index >= 0 && index < items->size())
  {
    return (*items)[index];
  }
  else
  {
    throw out_of_range("Index out of range");
  }
}