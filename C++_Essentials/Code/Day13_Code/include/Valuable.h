#pragma once
#include "Item.h"
#include <string>

class Valuable : public Item
{
private:
  int value;

public:
  Valuable(const std::string &valuableName, int valuableWeight, int valuableValue);

  void use() const override;

  void display() const override;
};