#include <iostream>
#include "time.h"
#include "grid.h"

int main() {
    grid userGridA;
    grid userGridB;
    srand(time(NULL));


    // data input
    userGridA.getXY();
    userGridB.getXY();
    // printing and assigning
    userGridA.gridFormation(userGridA.getX(),userGridA.getY());
    userGridB.gridFormation(userGridB.getX(),userGridB.getY());




    return 0;
}
