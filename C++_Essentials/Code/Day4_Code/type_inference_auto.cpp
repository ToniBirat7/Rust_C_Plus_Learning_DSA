#include <iostream>
using namespace std;

int main()
{
  auto score = 1;              // Int
  auto points = 12345678901;   // Long
  auto height = 2.5f;          // Float
  auto duration = 2.5;         // Double
  auto is_active = true;       // Bool
  auto initial = 'P';          // Char
  auto title = "Birat Gautam"; // String

  cout << "The type of score is : " << typeid(score).name() << endl;
  cout << "The type of points is : " << typeid(points).name() << endl;
  cout << "The type of height is : " << typeid(height).name() << endl;
  cout << "The type of duration is : " << typeid(duration).name() << endl;
  cout << "The type of is_active is : " << typeid(is_active).name() << endl;
  cout << "The type of initial is : " << typeid(initial).name() << endl;
  cout << "The type of title is : " << typeid(title).name() << endl;
}