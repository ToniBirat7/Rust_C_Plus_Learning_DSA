#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int mathGrade = 20;
  string name = "Birat";
  bool result = (mathGrade > 10) ? true : false;

  cout << "Student " << name << "is " << result ? "Pass" : "Faile";
  return 0;
}