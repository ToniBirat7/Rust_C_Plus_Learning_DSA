#include <iostream>
using namespace std;

// Learning Structures

enum class character_role
{
  PROTAGONIST,
  ANTAGONIST,
  SIDEKICK,
  NPC
};

struct game_character
{
  string name;
  int level;
  character_role role;
};

void check_structure()
{
  game_character buddy;

  buddy.name = "Toni",
  buddy.level = 10;
  buddy.role = character_role::ANTAGONIST;

  cout << "Buddy name is " << buddy.name << " Level is " << buddy.level << " Role is " << (int)buddy.role << endl;
}

int main()
{

  // Struct Implementation

  check_structure();
}
