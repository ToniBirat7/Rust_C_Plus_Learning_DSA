#ifndef INVENTORY_H // If inventory.h is not defined
#define INVENTORY_H // Define inventory.h

#include <string> // for std::string
#include <vector> // for std::vector

class Inventory
{
public:
  // Constructor
  Inventory();

  // Overloaded Constructor
  Inventory(int capacity_i);

  // Destructor
  ~Inventory();

  // Add item to the inventory
  void addItem(const std::string &item);

  // Remove item from the inventory
  void removeItem(const std::string &item);

  // Get item count
  int getItemCount() const;

  // Get item by index
  void displayItems() const;

private:
  std::vector<std::string> items; // Vector to store items
  int capacity;                   // Maximum capacity of the inventory
};

#endif // INVENTORY_H