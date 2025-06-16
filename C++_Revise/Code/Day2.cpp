#include <iostream>
#include <vector>
using namespace std;

// Pointers : Variables that store the address of another variable

int *nullPointerExample()
{
  int *ptr = nullptr; // Pointer initialized to null
  if (ptr == nullptr)
  {
    cout << "Pointer is null." << endl; // Output: Pointer is null.
  }
  else
  {
    cout << "Pointer is not null." << endl;
  }
  return ptr;
}

int main()
{
  string name = "John";
  string *ptr = &name;                          // Pointer to the variable 'name'
  cout << "Name: " << name << endl;             // Output: John
  cout << "Pointer to name: " << ptr << endl;   // Output: Address of 'name'
  cout << "Value at pointer: " << *ptr << endl; // Output: John

  int age = 30;
  int *agePtr = &age;                           // Pointer to the variable 'age'
  cout << "Age: " << age << endl;               // Output: 30
  cout << "Pointer to age: " << agePtr << endl; // Output: Address of 'age'
  cout << "Value at age pointer: " << *agePtr << endl;

  // Output: 30

  *agePtr = 35;                           // Changing the value at the pointer
  cout << "Updated Age: " << age << endl; // Output: 35, changed through pointer

  // Pointers with vectors

  vector<int> vec = {1, 2, 3, 4, 5};
  cout << "Vector elements: ";
  for (int i : vec)
  {
    cout << i << " "; // Output: 1 2 3 4 5
  }
  cout << endl;

  vector<int> *vecPtr = &vec; // Pointer to the first element of the vector

  cout << "Pointer to vector: " << vecPtr << endl; // Output: Address of the vector

  cout << "Value at vector pointer: ";
  for (int i = 0; i < vec.size(); i++)
  {
    cout << (*vecPtr)[i] << " "; // Output: 1 2 3 4 5
  }

  // Array of pointers

  int arr[] = {1, 2, 3, 4, 5};
  int *ptrArr = arr; // Pointer to the first element of the array

  cout << "Array elements using pointer:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << *(ptrArr + i) << " "; // Accessing elements using pointer arithmetic
  }
  cout << endl;

  // Checking for null pointer
  int *nPtr = nullPointerExample();
  if (nPtr == nullptr)
  {
    cout << "Null pointer received." << endl;
  }

  int newAge = 25;
  nPtr = &newAge; // Assigning the address of 'newAge' to a pointer

  cout << "Age: " << newAge << endl;             // Output: 25
  cout << "Pointer to age: " << nPtr << endl;    // Output: Address of 'newAge'
  cout << "Value at pointer: " << *nPtr << endl; // Output: 25
  return 0;
}