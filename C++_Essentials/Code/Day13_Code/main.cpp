#include "Item.h"
#include "Weapon.h"
#include "Ammo.h"
#include "Aid.h"
#include "Valuable.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{

  // Create Item Object

  cout << "We are Creating Item Clas Obejct" << endl;

  cout << endl;

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

  cout << endl;

  // If we use Heap with Pointer to create object
  // delete sword;

  // Create Weapon Object

  cout << "We are Creating Weapon Clas Obejct" << endl;

  cout << endl;

  // On the heap with smart pointer
  unique_ptr<Item> arrow = make_unique<Weapon>("Arrow", 10, 100);

  // Dispaly weapon details
  arrow->display();

  // Use the arrow
  arrow->use();

  cout << endl;

  cout << "We are Creating Ammo Clas Obejct" << endl;

  cout << endl;

  // On the heap with smart pointer
  unique_ptr<Item> ammo_5_5 = make_unique<Ammo>("5.56mm", 10, 100);

  // Dispaly weapon details
  ammo_5_5->display();

  // Use the arrow
  ammo_5_5->use();

  cout << endl;

  cout << "We are Creating Aid Clas Obejct" << endl;

  cout << endl;

  // On the heap with smart pointer
  unique_ptr<Item> firstAid = make_unique<Aid>("First Aid Kit", 10, 100);

  // Dispaly weapon details
  firstAid->display();

  // Use the arrow
  firstAid->use();

  cout << endl;

  cout << "We are Creating Valuable Clas Obejct" << endl;

  cout << endl;

  // On the heap with smart pointer
  unique_ptr<Item> value = make_unique<Valuable>("Coin", 10, 100);

  // Dispaly weapon details
  value->display();

  // Use the arrow
  value->use();

  cout << endl;

  return 0;
}