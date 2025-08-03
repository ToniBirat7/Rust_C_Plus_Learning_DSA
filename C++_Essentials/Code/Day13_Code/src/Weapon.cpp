#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(const string &weaponName, int weaponWeight, int weaponDamage) : Item(weaponName, weaponWeight), damage(weaponDamage)
{
}

void Weapon::use() const
{
  cout << "Swinging the weapon " << name << " with damage " << damage << endl;
}

void Weapon::display() const
{
  cout << "Weapon, " << name << " Weight, " << damage << " Damage, " << damage << endl;
}