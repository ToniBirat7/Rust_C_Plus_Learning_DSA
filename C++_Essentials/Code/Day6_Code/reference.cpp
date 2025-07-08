#include <iostream>
#include <vector>
using namespace std;

// Implementation of Reference
void implementReference()
{
  int age = 20;
  int &trackAge = age; //

  cout << "Address of A is : " << &age << endl;
  cout << "Address of B is : " << &trackAge << endl;

  trackAge = 30;

  cout << "Value of A after is : " << age << endl;
  cout << "Value of B after is : " << trackAge << endl;
}

// Use of references in for loop, this function modifies the original vector

void modifyVector(vector<int> &vec)
{
  for (int &num : vec)
  {           // Using reference to modify original elements
    num *= 2; // Doubling each element
  }
}

// Function to check what are not considered as references
void check_ref()
{

  // Ref check with non-premitive D Type array
  int profiles[] = {1, 2, 3, 4};
  // int secondProfiles[] = profiles; // We cannot directly assign
  // an array to another variable

  // Ref check with premitive D Type
  int a = 10;
  int b = a;

  // Ref check with non-primitive D Type vector

  vector<int> points = {1, 2, 3};

  vector<int> secondPoints = points;

  cout << "Address of A is : " << &a << endl;
  cout << "Address of B is : " << &b << endl;

  cout << "Address of first Vect is : " << &points << endl;
  cout << "Address of second Vect is : " << &secondPoints << endl;

  cout << endl;
}

// Vector for complex numbers
int main()
{
  // Check ref
  check_ref();

  cout << "Implementation of Reference" << endl;

  cout << endl;

  // Reference implementation
  implementReference();

  cout << endl;

  // Modify the original vector

  vector<int> numbers = {1, 2, 3, 4, 5};
  cout << "Before modification: ";
  for (int num : numbers)
  {
    cout << num << " "; // Output: 1 2 3 4 5
  }
  cout << endl;
  modifyVector(numbers); // Passing vector by reference
  cout << "After modification: ";
  for (int num : numbers)
  {
    cout << num << " "; // Output: 2 4 6 8 10
  }
  cout << endl;

  return 0;
}