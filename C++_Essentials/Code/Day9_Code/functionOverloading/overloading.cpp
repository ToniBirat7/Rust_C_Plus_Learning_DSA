#include <iostream>
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
string getSpeed(int distance, int time, const string &unit)
{
  float speed = distance / (float)time; // Both are int so need to cast
  return to_string(speed) + " " + unit;
}

int main()
{
  int speedInt;
  string speedStr;

  speedInt = getSpeed(200, 4); // Call the function with matching parameter

  cout << "Speed (Int)" << speedInt << endl;

  speedInt = getSpeed(4); // Call the function with matching parameter

  cout << "Speed (default distance)" << speedInt << endl;

  speedStr = getSpeed(200, 4, "kilometer per hour"); // Call the function with matching parameter

  cout << "Speed (default distance)" << speedStr << endl;

  return 0;
}