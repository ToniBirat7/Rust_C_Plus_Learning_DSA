#include <iostream>
using namespace std;

// Template function to calculate the size in bits of a given data type
template <typename T>
class Box
{
private:
  T item; // Item of type T

public:
  Box(T item) : item(item) {} // Constructor

  T getItem() const { return item; } // Getter for item
};

template <typename T>
int size_in_bits(T a)
{
  return sizeof(a) * 8;
}

int main()
{
  int a = 5;
  double b = 3.14;
  float c = 2.5f;
  short int d = 10;
  long long e = 1000000000;
  std::string f = "Hello";
  bool g = true;

  std::cout << "Size of float in bits: " << size_in_bits(c) << std::endl;     // Output: 32
  std::cout << "Size of short int in bits: " << size_in_bits(d) << std::endl; // Output: 16
  std::cout << "Size of long long in bits: " << size_in_bits(e) << std::endl; // Output: 64
  std::cout << "Size of int in bits: " << size_in_bits(a) << std::endl;       // Output: 32
  std::cout << "Size of double in bits: " << size_in_bits(b) << std::endl;    // Output: 64
  std::cout << "Size of string in bits: " << size_in_bits(f) << std::endl;    // Output: 64 (or more, depending on the implementation)
  std::cout << "Size of bool in bits: " << size_in_bits(g) << std::endl;      // Output: 8 (or more, depending on the implementation)

  cout << endl;

  Box<int> intBox(5);                  // Box of int
  Box<double> doubleBox(3.14);         // Box of double
  Box<std::string> stringBox("Hello"); // Box of string

  std::cout << "Int Box Item: " << intBox.getItem() << std::endl;       // Output: 5
  std::cout << "Double Box Item: " << doubleBox.getItem() << std::endl; // Output: 3.14
  std::cout << "String Box Item: " << stringBox.getItem() << std::endl; // Output: Hello

  return 0;
}