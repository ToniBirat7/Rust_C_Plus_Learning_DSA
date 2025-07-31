#include "inventory.h"
#include <iostream>
#include <vector>
#include <algorithm> // For searching

// Rest of the definitions
using namespace std;

Inventory::Inventory() : capacity(10) // Default constructor
{
  items = vector<string>(); // Initialize the vector
}
Inventory::Inventory(int capacity_i) : capacity(capacity_i) // Overloaded constructor
{
  items = vector<string>(); // Initialize the vector
}
Inventory::~Inventory() // Destructor
{
  // No need to manually deallocate the vector as it will be automatically destroyed
}
void Inventory::addItem(const string &item) // Add item to the inventory
{
  if (items.size() < capacity)
  {
    items.push_back(item);
  }
  else
  {
    cout << "Inventory is full, cannot add " << item << endl;
  }
}

void Inventory::removeItem(const string &item) // Remove item from the inventory
{
  auto it = find(items.begin(), items.end(), item);
  if (it != items.end())
  {
    items.erase(it);
  }
  else
  {
    cout << "Item " << item << " not found in inventory." << endl;
  }
}

int Inventory::getItemCount() const // Get item count
{
  return items.size();
}

void Inventory::displayItems() const // Display all items
{
  cout << "Inventory items:" << endl;
  for (const auto &item : items)
  {
    cout << "- " << item << endl;
  }
}