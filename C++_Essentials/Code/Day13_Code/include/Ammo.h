#pragma once
#include "Item.h"
#include <string>

class Ammo : public Item
{
private:
  int rounds;

public:
  Ammo(const std::string &ammoName, int ammoWeight, int ammoRounds);

  void use() const override;

  void display() const override;
};