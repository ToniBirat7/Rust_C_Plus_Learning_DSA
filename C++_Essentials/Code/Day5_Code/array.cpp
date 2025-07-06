#include <iostream>
using namespace std;

int main()
{
  int enemies[4];
  const float levelDifficulty[] = {1.0, 2.0, 3.0};         // It will be stored as double
  const float floatLevelDifficulty[] = {1.0f, 2.0f, 3.0f}; // It will be stored as float

  enemies[0] = 4; // If we've declared const we cannot assign value
  enemies[1] = 5;
  enemies[2] = 6;
  enemies[3] = 7;

  for (int i : enemies)
  {
    cout << "Element " << i << endl;
  }
}