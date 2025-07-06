#include <iostream>
#include <memory> // Include the memory header for smart pointers

using namespace std;

struct Enemy
{
  int health;
  int attackPower;
};

int main()
{
  unique_ptr<Enemy> boss = make_unique<Enemy>();
  boss->health = 200;
  boss->attackPower = 40;

  cout << "Boss Health: " << boss->health << endl;
  cout << "Boss Attack Power: " << boss->attackPower << std::endl;

  // No need to manually delete; std::unique_ptr takes care of it
  return 0;
}