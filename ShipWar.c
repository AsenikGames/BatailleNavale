#include <stdio.h>
#include <stdbool.h>

typedef struct Ship Ship;
typedef struct ShipPart ShipPart;

// New data Type Ship representing a Ship in the game
struct Ship{
  bool downed;          // True if ship has been downed
  ShipPart * partList;  // List of reference to each ShipPar
};
// New data Type ShipPart rereseting a part of a ship in one case
struct ShipPart{
  bool touched;         // True if ship has been touched, false else
  Ship * ship;          // Reference to the belonging Ship
};

// List of reference to Ship of a player
Ship * shipsA[5];
Ship * shipsB[5];

// 2D array representing the boardgame
ShipPart * gridA[10][10];
ShipPart * gridB[10][10];

int initGame();
int game();


// print a debug message
bool debugmode = false;
int debug(char * msg) { if (debugmode = true) printf("[DEBUG] %s \n", msg); }

// Main function called when programs is launch
int main(int argc, char const *argv[]) {

  // Reading program parameters
  for (int i = 1; i < argc; i++) {
    if (argv[i] == "debugmode") debugmode = true; // activate debugmode
  }

  initGame();
  game();
  return 0;
}

// Function to initialise game parametters
int initGame() {
  debug("InitGame Function : Start")

  debug("InitGame Function : End")
}

// Function represneting the game itself
int game() {
  debug("Game Function : Start");

  debug("Game Function : End")
}
