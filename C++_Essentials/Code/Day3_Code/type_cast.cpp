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

void careful_consideration_type_casting()
{
  int fahrenheit = 100;

  float celcius = (5 / 9) * fahrenheit; // It is integer division, so 0 i.e. Int

  cout << "Before " << celcius << endl;

  // In the expressions, there should be at least one variable with the float type
  float celcius2 = (static_cast<float>(5) / 9) * fahrenheit;

  cout << "After " << celcius2 << endl;
}

void type_casting_problem_solving()
{
  // Print the integer and the fractional part

  double weight = 10.99;

  cout << "Integer Part : " << static_cast<int>(weight) << endl;

  cout << "Fractional Part : " << static_cast<int>((weight - static_cast<int>(weight)) * 1000) << endl;

  // If we only substract it is still float and we want up to 4 decimal place so we multiply by 1000 and then cast to int

  // Output :
  // Integer Part : 10
  // Fractional Part : 989
}

int main()
{

  // Type Cast Funcs

  self_cast();

  cout << endl;

  cout << "Carefule Consideration" << endl;

  careful_consideration_type_casting();

  cout << "Problem Solving" << endl;

  cout << endl;

  type_casting_problem_solving();

  return 0;
}