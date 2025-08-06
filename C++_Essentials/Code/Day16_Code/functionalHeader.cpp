#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
  std::vector<int> scores = {10, 40, 20, 50, 30};
  std::sort(scores.begin(), scores.end(), std::greater<int>()); // It is a functor used to sort a vector in decending order.
  for (const auto &score : scores)
    std::cout << "Score: " << score << std::endl;
  return 0;
}
