#include <iostream>
#include <vector>
using namespace std;

void check_ref()
{

  // Ref check with non-premitive D Type
  int profiles[] = {1, 2, 3, 4};
  // int secondProfiles[] = profiles; // We cannot directly assign
  // an array to another variable

  // Ref check with premitive D Type
  int a = 10;
  int b = a;

  cout << "Address of A is : " << &a << endl;
  cout << "Address of B is : " << &b << endl;
}

// Vector for complex numbers
int main()
{
  // Check ref
  check_ref();
  return 0;
}