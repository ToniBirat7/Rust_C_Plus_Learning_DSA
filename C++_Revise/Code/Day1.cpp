#include <iostream>
#include <vector>
using namespace std;

// Pass by value

void passByValue(int x)
{
  x = 10; // This change will not affect the original variable
}

void passByReference(int &x)
{
  x = 10; // This change will affect the original variable
}

int main()
{
  int a = 5;
  cout << "Before passByValue: " << a << endl; // Output: 5
  passByValue(a);
  cout << "After passByValue: " << a << endl; // Output: 5, unchanged

  int b = 5;
  cout << "Before passByReference: " << b << endl; // Output: 5
  passByReference(b);
  cout << "After passByReference: " << b << endl; // Output: 10, changed

  // Vector
  vector<int> vec = {1, 2, 3, 4, 5};
  cout << "Before passByReference: ";
  for (int i : vec)
  {
    cout << i << " "; // Output: 1 2 3 4 5
  }
  cout << endl;
  passByReference(vec[0]);
  cout << "After passByReference: ";
  for (int i : vec)
  {
    cout << i << " "; // Output: 10 2 3 4 5
  }
  cout << endl;
  return 0;
}
