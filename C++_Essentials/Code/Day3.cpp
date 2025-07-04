#include <iostream>
using namespace std;

enum asset
{
  TEXTURE,
  SOUND
};

enum asset2
{
  SOUND
};

int main()
{

  int sound;
  sound = SOUND;

  cout << "This is " << sound << endl;
}