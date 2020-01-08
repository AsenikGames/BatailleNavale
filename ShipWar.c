#include <stdio.h>
#include <stdbool.h>

typedef struct Ship Ship;
typedef struct ShipPart ShipPart;

struct Ship{
  bool downed;
  ShipPart * partList;
};
struct ShipPart{
  bool touched;
  Ship * ship;
};



int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
