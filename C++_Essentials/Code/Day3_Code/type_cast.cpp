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

  player_x = sprite_x; // Will not be able to assign a negative number in an unsigned variable, we will get unexpected value of 2's compliment

  cout << "Target X (float) " << target_x << endl;

  cout << "Sprite X (int) " << sprite_x << endl;

  cout << "Player X (uint) " << player_x << endl;

  // But if we cast the value then we will get the expected output
  cout << "Player X (uint) after conversion to signed 32 bit int " << static_cast<int32_t>(player_x) << endl;
}

int main()
{

  // Type Cast Funcs

  self_cast();

  return 0;
}