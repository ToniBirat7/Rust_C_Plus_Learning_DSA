#include <iostream>
using namespace std;

// Use of Static, Accessing With Pointer, Stored in Data Segment (of Memory Segment)
int *createMonster()
{
  static int health = 100; // Health is an automatic variable
  std::cout << "Monster's health: " << health << std::endl;

  std::cout << "Monster's Address: " << &health << std::endl;
  return &health;
} // Health is destroyed here

// Consider a scenario where you want to create a game character inside a function and return it to the caller:

// Character structure for game character
struct Character
{
  int health;
  int strength;
};

// Function to create a character dynamically -> returns a pointer to the character
Character *createCharacter(int health, int strength)
{
  Character *newCharacter = new Character; // Allocate on the heap
  newCharacter->health = health;
  newCharacter->strength = strength;
  return newCharacter; // Return pointer to heap-allocated object
}

int main()
{

  // Accessing the value of health variable which was not destroyed after function call from stack
  // as it was stored in the Data Segment
  int *addHealth;
  addHealth = createMonster();

  cout << "The address is " << addHealth << endl;

  cout << "The value is " << *addHealth << endl;

  // Below is the Implementation of Persistant Objects with Pointers

  // Store the reference returned by createCharacter
  // in a pointer variable
  Character *hero = createCharacter(100, 50);
  cout << "Hero's health: " << hero->health << endl;
  cout << "Hero's strength: " << hero->strength << endl;
  delete hero; // Free the allocated memory
  return 0;
}