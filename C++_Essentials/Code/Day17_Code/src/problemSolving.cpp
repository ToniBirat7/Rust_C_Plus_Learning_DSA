// Virtual Pet Schedule

// Problem Link :

// https://www.linkedin.com/learning/complete-guide-to-c-plus-plus-programming-foundations/code-challenges/urn:li:la_assessmentV2:69864423?autoSkip=true&resume=false&u=42288921

// C++ implementation​​​​​​‌‌​‌‌‌‌​‌‌​‌​​‌‌‌​​​​‌‌‌‌ below
#include <iostream>
#include <cstdint>
#include <vector>
#include <deque>
#include <string>
#include <utility>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
// #define showExpectedResult
// #define showHints

template <typename T>
using deque = std::deque<T>;
template <typename T>
using vector = std::vector<T>;
template <typename T1, typename T2>
using pair = std::pair<T1, T2>;
using string = std::string;

// Enum class for operations
enum class Operation
{
  ADD_FRONT,
  ADD_BACK,
  REMOVE_FRONT,
  REMOVE_BACK
};

deque<pair<string, int>> ManagePetSchedule(const deque<pair<string, int>> &initialActivities, const vector<pair<Operation, pair<string, int>>> &operations)
{
  deque<pair<string, int>> schedule;

  // Write your code here.

  return schedule;
}
