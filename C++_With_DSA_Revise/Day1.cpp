#include <iostream>
#include <cstdint>

int main()
{
  int8_t x = 67;
  int8_t y = x << 1;

  std::cout << "x: " << (int)x << std::endl;
  std::cout << "x << 1: " << (int)y << std::endl;
}
