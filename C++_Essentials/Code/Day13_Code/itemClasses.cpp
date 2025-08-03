#include "header.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Constructor
Item::Item(const string &itemName, int itemWeight) : name(itemName), weight(itemWeight)
{
  cout << "Object created with Name : " << name << "and Weight : " << weight << endl;
}

// Destructor
Item::~Item() {}

// Use Method
void Item::use() const
{
  cout << "Using " << name << "..\n";
}

// Get Name
string Item::getName() const { return name; }

// Get Weight
int Item::getWeight() const { return weight; }

// Display Method
void Item::display() const
{
  cout << "Item: " << name << ",Weight: " << weight << endl;
}