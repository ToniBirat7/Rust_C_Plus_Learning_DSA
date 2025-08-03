#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(const string &weaponName, int weaponWeight, int weaponDamage) : Item(weaponName, weaponWeight), damage(weaponDamage)
{
  cout << "Object created with Name : " << name << "and Weight : " << weight << endl;
}

void Weapon::use() const
{
  cout << "Swinging the weapon " << name << " with damage " << damage << endl;
}

void Weapon::display() const
{
  cout << "Weapon " << name << ",Weight " << damage << ",Damage" << damage << endl;
}