#include <iostream>
using namespace std;

// Learning Enum

enum class asset
{
  TEXTURE,
  SOUND
};

enum class asset2
{
  SOUND
};

int main()
{

  int sound;
  sound = (int)asset2::SOUND; // Explicit Type Conversion because Enum Class are Strongly Typed

  // OR

  asset2 sound2 = asset2::SOUND;

  cout << "This is " << sound << endl;
}
