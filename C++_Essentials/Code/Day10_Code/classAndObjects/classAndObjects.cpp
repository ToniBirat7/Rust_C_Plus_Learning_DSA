#include <iostream>
#include <vector>
#include <algorithm> // For searching, find() method
#include <stdexcept> // required for std::runtime_error
using namespace std;

// Class definition
class Inventory
{
  // We will keep the properties private
private:
  vector<string> *items; // Pointer to a vector of items, points to the first items by default
  int capacity;          // Max capacity

public:
  // Default Constructor
  Inventory() : capacity(10) // Member Initializer List
  {
    items = new vector<string>(); // Dynamic Memory Allocation in Heap
  }

  // Overloaded Constructor
  Inventory(int capacity_i) : capacity(capacity_i)
  {
    items = new vector<string>();
  }

  // Destructor
  ~Inventory()
  {
    delete items; // Prevent memory leaks by deallocating the dynamic vector
  }

public:
  void addItem(const string &value) // item is an alias that points to the string variable that will be passed
  {
    if (items->size() < capacity) // Dereferencing the pointer to use the method, we could have used (*items).size() as well
    {
      items->push_back(value);
    }
    else
    {
      throw runtime_error("Inventory is full, cannot add");
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

  void displayContent() const
  {
    cout << "Inventor [ ";
    for (string item : *items)
    {
      cout << item;
    }
    cout << " ]" << endl;
  }
};

int main()
{
  // Instantiate an Object
  Inventory myInventory(5); // Overloaded constructor with capacity of 5

  // Display Current Inventory
  cout << "Current Contents are : " << endl;
  cout << endl;

  myInventory.displayContent();

  // Add elements
  myInventory.addItem("Birat");
  myInventory.addItem("Biratt");
  myInventory.addItem("Birattt");
  myInventory.addItem("Biratttt");
  myInventory.addItem("Birattttt");

  cout << "Added to Full Capacity" << endl;

  // Add another item when full
  try
  {
    cout << "Trying to add beyond capacity";
    myInventory.addItem("Birattttt");
  }
  catch (const out_of_range &e)
  {
    cout << "Error: " << e.what() << endl;
  }

  // Remove an item
  cout << "Remove Birat" << endl;
  myInventory.removeItem("Birattttt");

  // Display an item count
  cout << "There are total of : " << myInventory.getItemCount() << endl;

  // Access item by index
  cout << "Accessing Birat by Index" << endl;
  cout << "The item in Index 0 is : " << myInventory.getItem(0) << endl;

  // Access out of range
  try
  {
    cout << "Accessing the Element of Index 10" << endl;
    string item = myInventory.getItem(10);
  }
  catch (const runtime_error &e)
  {
    cout << "Error : " << e.what() << endl;
  }

  // Display after CRUD
  cout << "Content Afer CRUD : " << endl;
  cout << endl;
  myInventory.displayContent();

  return 0;
}