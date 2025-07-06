#include <iostream>
using namespace std;

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
}
