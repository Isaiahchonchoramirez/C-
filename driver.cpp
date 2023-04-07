#include "team.h"
#include "player.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


int main() {
  // Create a vector of teams.
  vector<Team> teams;

  // Read the teams from the file.
  string line;
  ifstream file("teams.txt");
  while (getline(file, line)) {
    string name;
    int points;
    stringstream ss(line);
    ss >> name >> points;
    teams.push_back(Team(name, points));
  }

  // Print the teams.
  for (Team team : teams) {
    cout << "TEAM #" << team.getName() << endl;
    cout << "Team's name: " << team.getName() << endl;
    cout << "Team's point: " << team.getTotalPoints() << endl;
    cout << "Players of TEAM #" << team.getName() << endl;
    cout << "Player Name             Player Number           Player Points" << endl;
    for (Player player : team.getPlayers()) {
      cout << player.getName() << " " << player.getNumber() << " " << player.getPoints() << endl;
    }
  }

  // Find the top two teams with the most points.
  int maxPoints = 0;
  int maxPointsTeam = 0;
  for (int i = 0; i < teams.size(); i++) {
    if (teams[i].getTotalPoints() > maxPoints) {
      maxPoints = teams[i].getTotalPoints();
      maxPointsTeam = i;
    }
  }

  // Print the top two teams.
  cout << "The top two teams with the most points are:" << endl;
  cout << "Team #" << teams[maxPointsTeam].getName() << " with points " << teams[maxPointsTeam].getTotalPoints() << endl;
  cout << "Team #" << teams[maxPointsTeam == 0