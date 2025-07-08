#include <iostream>
#include <vector>
#include <complex>
using namespace std;

void check_ref()
{
  int a = 10;

  int b = a;

  cout << "Address of A is : " << &a << endl;
  cout << "Address of B is : " << &b << endl;
}

// Vector for complex numbers
int main()
{
  vector<complex<double>> points;

  // Complex number i.e. a + ib
  points.push_back(complex<double>(3.5, 4.0));
  points.push_back(complex<double>(3, 4.0));
  points.push_back(complex<double>(2, 4.0));
  points.push_back(complex<double>(1, 4.0));

  for (auto i : points)
  {
    cout << "Point: " << i.real() << " + " << i.imag() << "i" << endl;
  }

  // Check ref

  check_ref();
  return 0;
}