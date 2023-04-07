#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

using namespace std;

class Player {
public:
  Player(int number, string name, int points);
  int getNumber() const;
  string getName() const;
  int getPoints() const;

private:
  int number;
  string name;
  int points;
};

#endif // PLAYER_H