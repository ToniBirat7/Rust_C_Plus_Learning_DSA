#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int i0 = 4, i1 = 6, i2 = 8;
  vector<int> num = {i2, i0, i1};
  vector<int> &nums = num;
  std::cout << nums[0] << nums[1] << nums[2];
}