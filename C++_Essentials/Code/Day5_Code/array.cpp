#include <iostream>
using namespace std;

int main()
{
  int enemies[4];

  enemies[0] = 4;
  enemies[1] = 5;
  enemies[2] = 6;
  enemies[3] = 7;

  for (int i : enemies)
  {
    cout << "Element " << i << endl;
  }
}