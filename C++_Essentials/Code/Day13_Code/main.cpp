#include "header.h"
#include <iostream>

using namespace std;

int main()
{

  // Create an Object in the Heap
  Item *sword = new Item("Steel Sword", 10); // This way we can forget to delete the Sword leading to memory leaks

  // Use smart pointers to manage memory automatically
  

  // Display item details, access with arrow operator
  sword->display();

  // Use the item
  sword->use();

  // Access individual properties
  std::cout << "Name: " << sword->getName() << std::endl;
  std::cout << "Weight: " << sword->getWeight() << std::endl;

  return 0;
}