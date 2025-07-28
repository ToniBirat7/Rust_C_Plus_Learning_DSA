#include <iostream>
#include <string>
using namespace std;

// Speed of player
int getSpeed(int distance, int time)
{
  return distance / time; // Return int as int/int
}

// Overloaded function to get only one parameter and default speed
int getSpeed(double time)
{
  return static_cast<int>(100 / time); // As time would be pass as double
}

// Overloaded function to get the speed in the specific format
int getSpeed(int distance, int time, const string &unit)
{
  float speed = distance / (float)time; // Both are int so need to cast
  return to_string(speed) + " " + unit;
}

int main()
{

  return 0;
}