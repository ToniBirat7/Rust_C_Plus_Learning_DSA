#include <iostream>
using namespace std;

void self_cast()
{
  float target_x;
  int32_t sprite_x;
  u_int32_t player_x;

  target_x = 123.45; // It will be double

  target_x = 123.45f; // It will be converted back to float.

  // Other

  target_x = -123.45; // Will convert into float

  sprite_x = target_x; // Will convert into integer

  player_x = sprite_x; // Will not be able to assign a negative number in an unsigned variable
}

int main()
{

  // Type Cast Funcs

  self_cast();

  return 0;
}