#include "Ammo.h"
#include <iostream>

using namespace std;

Ammo::Ammo(const string &ammoName, int ammoWeight, int ammoRounds) : Item(ammoName, ammoWeight), rounds(ammoRounds)
{
}

void Ammo::use() const
{
  cout << "Reloading " << rounds << " rounds of " << name << endl;
}

void Ammo::display() const
{
  cout << "Ammo, " << name << " Weight, " << weight << " Rounds, " << rounds << endl;
}