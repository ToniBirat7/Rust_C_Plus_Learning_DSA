#pragma once
#include "Item.h" // Because Weapon Inhertis Item

class Weapon : public Item
{
private:
  int damage;

public:
  // Constructor
  Weapon(const std::string &weaponName, int weaponWeight, int weaponDamage);

  // Override the use Method
  void use() const override;

  // Override the display method

  void display() const override;
};