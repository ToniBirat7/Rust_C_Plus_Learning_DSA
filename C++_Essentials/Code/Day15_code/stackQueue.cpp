#include <iostream>
#include <queue> // Adaptive Container from the Standard Template Library
#include <stack> // Adaptive Container from the Standard Template Library

using namespace std;

int main()
{
  queue<string> eventQueue; // FIFO container for game events

  // Adding event to the queue
  eventQueue.push("Move Forward");
  eventQueue.push("Collect Coin");
  eventQueue.push("Attack Enemy");
  eventQueue.push("Stop");

  // Processing events in FIFO order
  while (!eventQueue.empty())
  {
    string currentEvent = eventQueue.front();
    cout << "Current Event is : " << currentEvent << endl;
    cout << endl;
    eventQueue.pop();
  }

  return 0;
}