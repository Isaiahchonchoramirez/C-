#include "player.h"

Player::Player(int number, string name, int points) {
  this->number = number;
  this->name = name;
  this->points = points;
}

int Player::getNumber() const {
  return number;
}

string Player::getName() const {
  return name;
}

int Player::getPoints() const {
  return points;
}