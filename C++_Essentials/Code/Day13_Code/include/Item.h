#ifndef HEADER_H // If header.h is not defined

#define HEADER_H // Define it

#include <string>

class Item
{
protected:
  std::string name;
  int weight;

public:
  // Constructor
  Item(const std::string &itemName, int itemWeight);

  // Virtual Destructure because other classes will inherirt it, to prevent memory leaks Base Class's destructor must be virtual
  virtual ~Item();

  // Can be overriden by Derived Class
  virtual void use() const;

  // Get Name
  std::string getName() const;

  // Get Weight
  int getWeight() const;

  // Virtual method to display
  virtual void display() const;
};

#endif // HEADER_H