#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>

using namespace std;

class Team {
public:
  Team(string name, int points);
  void addPlayer(Player player);
  int getTotalPoints() const;
  vector<Player> getPlayers() const;
  string getName() const;

private:
  string name;
  int points;
  vector<Player> players;
};

#endif // TEAM_H