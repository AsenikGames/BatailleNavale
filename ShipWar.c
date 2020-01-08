#include <stdio.h>
#include <stdbool.h>

typedef struct Ship Ship;
typedef struct ShipPart ShipPart;

// New data Type Ship representing a Ship in the game
struct Ship{
  bool drowed;          // True if ship has been drowned
  ShipPart * partList[];  // List of reference to each ShipPar
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

// Main function called when programs is launch
int main(int argc, char const *argv[]) {
  printf(" ---- Main funtion ---- \n");

  initGame();
  game();
  return 0;
}

// Function to initialise game parametters
int initGame() {
  printf(" ---- InitGame function ---- \n");

  Ship s;
  s.drowed = false;
  ShipPart sp1;
  ShipPart sp2;
  sp1.touched = false;
  sp2.touched = false;
  sp1.ship =  &s;
  sp2.ship =  &s;
  s.partList[0] = &sp1;
  s.partList[1] = &sp2;
  gridA[1][1] = &sp1;
  gridA[1][2] = &sp2;

  return 0;
}

// Function represneting the game itself
int game() {
  printf(" ---- Game function ---- \n");

  char abscisse[10] = {'A','B','C','D','E','F','G','H','I','J'};
  printf("\n");
  printf("   ");
  for (int i = 0 ; i < 10; i++) {
    printf(" %c ", abscisse[i]);
  }
  printf("\n");
  printf("   ");
  for (int i = 0 ; i < 10; i++) {
    printf("---");
  }

  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d |",i);
    for (int j = 0; j < 10; j++) {
      if (gridA[i][j] == NULL) { printf(" 0 "); }
      else { printf(" X "); }
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
