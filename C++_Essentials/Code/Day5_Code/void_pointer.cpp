#include <iostream>
using namespace std;

int main()
{
  float playerHealth = 100.0f;          // Player's health in a game
  void *genericPointer = &playerHealth; // Generic pointer pointing to player's health

  // To dereference, cast the pointer back to float*
  float actualHealth = *(static_cast<float *>(genericPointer));

  cout << " After Deferencing " << actualHealth << endl;
  // Or alternatively
  float enemyHealth = *(float *)genericPointer;
}