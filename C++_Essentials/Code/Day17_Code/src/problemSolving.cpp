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

  // Copy the initialActivites in the Schedule
  for (auto &activity : initialActivities)
  {
    schedule.push_back(activity);
  }

  // For Operations
  for (auto &item : operations)
  {
    switch (item.first)
    {
    case Operation::ADD_FRONT:
      schedule.push_front(item.second);
      break;
    case Operation::ADD_BACK:
      schedule.push_back(item.second);
      break;
    case Operation::REMOVE_FRONT:
      schedule.pop_front();
      break;
    default:
      schedule.pop_back();
      break;
    }
  }

  return schedule;
}

int main()
{
  deque<pair<string, int>> initialActivities = {{"Photograph", 20}, {"Play", 45}, {"Sleep", 60}};
  vector<pair<Operation, pair<string, int>>> operations = {
      {Operation::REMOVE_FRONT, {"", 0}},
      {Operation::ADD_FRONT, {"Eat", 15}},
      {Operation::ADD_BACK, {"Groom", 45}}};

  deque<pair<string, int>> learnerResult = ManagePetSchedule(initialActivities, operations);
}
