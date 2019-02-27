#include <iostream>
#include "time.h"
#include "grid.h"

int main() {
    grid userGridA;
    grid userGridB;
    srand(time(NULL));
    int userX;
    int userY;

    cout << "Please input the X value (rows): " << endl;
    cin >> userX;

    cout << "Please input the Y value (columns): " << endl;
    cin >> userY;

    // data input
    userGridA.getXY(userX, userY);
    userGridB.getXY(userX, userY);
    // printing and assigning
    userGridA.gridFormation(userGridA.getX(),userGridA.getY());
    userGridB.gridFormation(userGridB.getX(),userGridB.getY());

    userGridA.compareGrids(userGridA.getArray(),userGridB.getArray());
    userGridA.deleteGrids();
    userGridB.deleteGrids();


    return 0;
}
