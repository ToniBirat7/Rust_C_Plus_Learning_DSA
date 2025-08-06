#include <iostream>
using namespace std;

class MultiplyBy
{

private:
  int factor_;

public:
  MultiplyBy(int factor) : factor_(factor) {}

  int operator()(int value) const
  {
    return value * factor_;
  }
};

int main()
{
  MultiplyBy multiplyBy5(5);    // Create a functor with factor 5
  int result = multiplyBy5(10); // Calls operator() with value 10

  cout << "Result: " << result << endl;

  return 0;
}