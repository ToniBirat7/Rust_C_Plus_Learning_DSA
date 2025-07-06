#include <iostream>
using namespace std;

void pointerWithArray()
{
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr; // Pointer to the first element of the array

  cout << "Array elements using pointer:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << ptr[i] << " "; // Accessing elements using pointer arithmetic
  }
  cout << endl;
}

int main()
{
  int a = 37;
  int *ptr;

  cout << "The value of a is " << a << endl;

  cout << "The address of a is " << &a << endl;

  ptr = nullptr;

  cout << "The address of ptr before is " << ptr << endl;

  ptr = &a;

  cout << "The address of ptr after is " << ptr << endl;

  cout << "The value of ptr after is " << *ptr << endl;

  pointerWithArray();
}
