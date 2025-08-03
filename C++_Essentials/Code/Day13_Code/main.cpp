#include "Item.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{

  // Create an Object in the Heap
  // Item *sword = new Item("Steel Sword", 10); // This way we can forget to delete the Sword leading to memory leaks

  // Use smart pointers to manage memory automatically
  unique_ptr<Item> sword = make_unique<Item>("Steel Sword", 10);

  // Display item details, access with arrow operator
  sword->display();

  // Use the item
  sword->use();

  // Access individual properties
  std::cout << "Name: " << sword->getName() << std::endl;
  std::cout << "Weight: " << sword->getWeight() << std::endl;

  // If we use Heap with Pointer to create object
  // delete sword;

  return 0;
}