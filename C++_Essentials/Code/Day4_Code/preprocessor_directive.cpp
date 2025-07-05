#include <iostream>
#include <cstdint>
using namespace std;

#define MAX_AMMO 500
#define DEBUG

int main()
{
  int32_t ammo = MAX_AMMO / 5;
  uint8_t health_items = 5;

  ammo += 200;
  health_items -= 2;

#ifdef DEBUG
  cout << "[DEBUG] Starting game simulation..." << endl;
#endif

  cout << "Final Ammo : " << ammo << endl;
  cout << "Remaning Health : " << static_cast<int>(health_items) << endl;

  return 0;
}