#include "Aid.h"
#include <iostream>

using namespace std;

Aid::Aid(const string &aidName, int aidWeight, int aidHealingPoints) : Item(aidName, aidWeight), healingPoints(aidHealingPoints)
{
}

void Aid::use() const
{
  std::cout << "Using " << name << " to heal " << healingPoints << " health points" << std::endl;
}

void Aid::display() const
{
  std::cout << "Aid: " << name << ", Weight: " << weight << ", Healing Points: " << healingPoints << std::endl;
}