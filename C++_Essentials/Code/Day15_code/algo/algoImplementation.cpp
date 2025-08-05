#include <iostream>
#include <vector>
#include <algorithm> // For STL algorithms
#include <numeric>   // For numeric algorithms

using namespace std;

int main()
{
  vector<int> numbers = {5, 2, 8, 1, 4};

  // Non-modifying algorithm: find
  auto it = find(numbers.begin(), numbers.end(), 4);
  if (it != numbers.end())
    cout << "Found: " << *it << endl;
  else
    cout << "Not Found" << endl;

  // Modifying algorithm: sort
  sort(numbers.begin(), numbers.end());
  cout << "Sorted Numbers: ";
  for (const auto &num : numbers)
    cout << num << " ";
  cout << endl;

  // Numeric algorithm: accumulate
  int sum = accumulate(numbers.begin(), numbers.end(), 0);
  cout << "Sum of Numbers: " << sum << endl;

  return 0;
}