#include <iostream>

void initializePlayer(const std::string &name = "Survivor", int lives = 3, int difficulty = 1)
{
  std::cout << "Player: " << name << std::endl;
  std::cout << "Lives: " << lives << std::endl;
  std::cout << "Difficulty Level: " << difficulty << std::endl;
}

int main()
{
  initializePlayer();                // Uses default arguments: "Survivor", 3, 1
  initializePlayer("Explorer");      // Uses default lives and difficulty: 3, 1
  initializePlayer("Hero", 5);       // Uses default difficulty: 1
  initializePlayer("Veteran", 2, 3); // Uses provided arguments
  return 0;
}