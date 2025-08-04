#include <iostream>
using namespace std;

// Template function to calculate the size in bits of a given data type

template <typename T>
int size_in_bits(T a)
{
  return sizeof(a) * 8;
}

int main()
{
  int a = 5;
  double b = 3.14;

  std::cout << "Size of int in bits: " << size_in_bits(a) << std::endl;    // Output: 32
  std::cout << "Size of double in bits: " << size_in_bits(b) << std::endl; // Output: 64

  return 0;
}