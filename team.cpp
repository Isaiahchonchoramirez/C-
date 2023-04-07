#include "team.h"

Team::Team(string name, int points) {
  this->name = name;
  this->points = points;
}

void Team::addPlayer(Player player) {
  players.push_back(player);
}

int Team::getTotalPoints() const {
  int total = 0;
  for (Player player : players) {
    total += player.getPoints();
  }
  return total;
}

vector<Player> Team::getPlayers() const {
  return players;
}

string Team::getName() const {
  return name;
}