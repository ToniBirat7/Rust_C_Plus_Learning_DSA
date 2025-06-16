#include <iostream>
#include <vector>
using namespace std;

// Pointers : Variables that store the address of another variable

int main()
{
  string name = "John";
  string *ptr = &name;                          // Pointer to the variable 'name'
  cout << "Name: " << name << endl;             // Output: John
  cout << "Pointer to name: " << ptr << endl;   // Output: Address of 'name'
  cout << "Value at pointer: " << *ptr << endl; // Output: John
}