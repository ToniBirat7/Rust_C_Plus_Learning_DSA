#pragma once
#include "Item.h"
#include <string>

class Aid : public Item
{
private:
  int healingPoints;

public:
  Aid(const std::string &aidName, int aidWeight, int aidHealingPoints);

  void use() const override;

  void display() const override;
};