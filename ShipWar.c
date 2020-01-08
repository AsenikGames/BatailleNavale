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



// Main function called when programs is launch
int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
