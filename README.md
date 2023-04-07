# C-
WCC C++
      MP_8
// Soccer Game. Write a program that reads the following data about soccer teams into classes: Team's name, Team's Total Points. Each team has 11 players. Each player class has Player’s name, Player’s number, Points scored by Player. The program should keep an array of 4 teams of the Team class, i.e. each element is for a different team. The program should read the information for each player from the input file. It should then display a table that lists each team and its players’ numbers, names and points scored. The program should also calculate the total points earned by each team. The program should display the top two teams that have the most points. The program should also determine which player earned the most points on each team and display these players' information.

Program must 2 classes, one called TeamClass and the other one is PlayerClass.

The output should be formatted to look like the following screen shot except it should work for 4 teams.

TEAM #1

Team's name: NNNNNNNNN

Team's point: XXX     (the sum of the points of its players' points)

 

Players of TEAM #1 : NNNNNNNNN

Player Name             Player Number           Player Points

***********             ************            ***********

1. FFFFF LLLLLL         NN                      PP

2. FFFFF LLLLLL         NN                      PP

3. FFFFF LLLLLL         NN                      PP

....

11. FFFFF LLLLLL        NN                      PP

...etc.  (repeat these for the 4 teams and their players)

The player with the most points on Team #1 is FFFFFFFFF LLLLLL

The player with the most points on Team #2 is FFFFFFFFF LLLLLL

...etc.

 

The top two teams with the most points are:

Team #X with points PPP and Team #Y with points PPP

 

 

The data for the teams and their players should be stored in file called teams.txt as follows: the first line is the team name followed by its 11 players. Each player line has the number of the player, the first name, the last name and number of the points scored in the tournament.

 

ARGENTINE

1 Lionel         Messi      16

2 Paulo          Dybala     2

3 Julian         Alvarez    0

4 Emiliano       Martinez   1

5 Lisandro       Martinez   3

6 Rodrigo        DePaul     4

7 Angel          DiMaria    5

8 Lautaro        Martinez   3

9 Alexis         Mac        0

10 Enzo          Fernandez  0

11 Christian    Romero     1

 

BRAZIL

1 Alex           Telles     2

2 Bremer         Juan       3

3 Dani           Alves      6

4 Danilo         Mati       5

5 Eder           Militao    1

6 Marquinhos    James      0

7 Thiago         Silva      0

8 Antony         Silva      2

9 Gabriel        Jesus      4

10 Gabriel       Martinelli 8

11 Neymar        Martinez   10

 

FRANCE

1 Benjamin       Lecomte    5

2 Alban          Lafont     4

3 Alphonse       reola       2

4 Steve          Mandanda   0

5 Benoit         Costil     1

6 Mike           Maignan    8

7 William        Saliba     9

8 Axel           Disasi     3

9 Ibrahima       Konate     2

10 Raphael       Varane     7

11 Adil          Rami       4

 

POTUGAL

1 Diogo          Dalot      4

2 Joao           Cancelo    8

3 Nuno           Mendes     3

4 Raphael        Guerreiro  2

5 Ruben          Dias       1

6 Andre          Silva      5

7 Cristiano     Ronaldo    14

8 Goncalo        Ramos      8

9 Joao           Felix      7

10 Rafael        Leao       2

11 Ricardo       Horta      1

 

Please turn in the team.h, team.cpp, player.h, player.cpp, driver.cpp, team.txt, player.txt and the output.txt files.
