#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct SortByHealth
{
  bool operator()(const pair<string, int> &enemy1, const pair<string, int> &enemy2) const
  {
    return enemy1.second < enemy2.second; // Sort by Health
  }
};

int main()
{
  vector<pair<string, int>> enemies = {{"Zombie", 100},
                                       {"Mutatnt", 150},
                                       {"Ghoul", 80}};
  sort(enemies.begin(), enemies.end(), SortByHealth());

  for (const auto &enemy : enemies)
  {
    cout << enemy.first << "with health:" << enemy.second << endl;
  }

  return 0;
}