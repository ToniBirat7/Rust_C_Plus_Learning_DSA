#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<pair<string, int>> enemies = {{"Zombie", 100},
                                       {"Mutatnt", 150},
                                       {"Ghoul", 80}};

  sort(enemies.begin(), enemies.end(), [](const auto &enemy1, const auto &enemy2)
       { return enemy1.second < enemy2.second; }); // Passing Functor

  for (const auto &enemy : enemies)
  {
    cout << enemy.first << "with health:" << enemy.second << endl;
  }

  return 0;
}