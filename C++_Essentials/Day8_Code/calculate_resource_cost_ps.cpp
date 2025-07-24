// C++ implementation​​​​​​‌‌​‌‌​‌​‌​‌​‌‌​​‌​‌​​‌​‌‌ below
#include <iostream>
#include <cstdint>
#include <vector>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
// #define showExpectedResult
// #define showHints

struct Resource
{
  std::string name;
  double baseCost;
  char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources)
{
  double result = 0.0;
  double tempResult = 0.0;

  // Write your code here
  for (auto item : resources)
  {
    double rate = 0.0;

    switch (item.type)
    {
    case 'B':
      rate = 0.05;
      break;
    case 'L':
      rate = 0.15;
      break;
    }

    tempResult = item.baseCost + (item.baseCost * rate);
    result = result + tempResult;
  }

  return result;
}

int main()
{
  // Example 1 resources
  std::vector<Resource> resources = {
      {"Wood", 125.0, 'B'},
      {"Gold", 200.0, 'L'},
      {"Water", 50.0, 'E'}};

  double learnerResult = CalculateTotalCost(resources);

  std::cout << "The Total Cost is : " << learnerResult << std::endl;

  return 1;
}
