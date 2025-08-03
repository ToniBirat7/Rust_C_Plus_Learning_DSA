#include "Item.h"
#include "Valuable.h"
#include <iostream>
using namespace std;

Valuable::Valuable(const string &valuableName, int valuableWeight, int valuableValue) : Item(valuableName, valuableWeight), value(valuableValue)
{
}

void Valuable::use() const
{
  std::cout << "Storing " << name << " in the safe, value: " << value << std::endl;
}

void Valuable::display() const
{
  std::cout << "Valuable: " << name << ", Weight: " << weight << ", Value: " << value << std::endl;
}