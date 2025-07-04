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

// Size Comparision

void compare_class_struct()
{
  struct A
  {
    int x;
    float y;
  };
  class B
  {
  public:
    int x;
    float y;
  };

  cout << "Struct " << sizeof(game_character) << endl;

  cout << "Class " << sizeof(game_character) << endl;
}

int main()
{

  // Struct Implementation

  check_structure();

  // Compare Size

  compare_class_struct();
}
