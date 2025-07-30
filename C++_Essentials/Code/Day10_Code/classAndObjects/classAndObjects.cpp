#include <iostream>
#include <vector>
#include <algorithm> // For searching
using namespace std;

// Class definition
class Inventory
{
  // We will keep the properties private
private:
  vector<string> *items; // Pointer to a vector of items, points to the first items by default
  int capacity;          // Max capacity

public:
  void addItem(const string &value) // item is an alias that points to the string variable that will be passed
  {
    if (items->size() < capacity) // Dereferencing the pointer to use the method, we could have used (*items).size() as well
    {
      items->push_back(value);
    }
    else
    {
      cout << "Inventory is full, cannot add " << value << endl;
    }
  }

  void removeItem(const string &item)
  {
    auto it = find(items->begin(), items->end(), item); // Returns matching iterator or the end iterator

    if (it != items->end()) // If it does not match the last iterator then erase it
    {
      items->erase(it);
    }
    else
    {
      cout << "Item " << item << "Not found" << endl;
    }
  }

  // Access item  by index
  string getItem(int index) const
  { // Const correctness is used to prevent the method from modifying any properties and methods
    if (index >= 0 && index < items->size())
    {
      return (*items)[index];
    }
    else
    {
      throw out_of_range("Index out of range");
    }
  }

  int getItemCount() const
  {
    return items->size();
  }
};