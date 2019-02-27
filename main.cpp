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

    // printing and assigning grids
    cout << "Grid 1:" << endl;
    userGridA.gridFormation(userGridA.getX(),userGridA.getY());
    cout << "Grid 2: "<< endl;
    userGridB.gridFormation(userGridB.getX(),userGridB.getY());

    // printing comparison grid
    cout << "Grid 3/Comparison Grid: " << endl;
    userGridA.compareGrids(userGridA.getArray(),userGridB.getArray());

    // Delete grids
    userGridA.deleteGrids();
    userGridB.deleteGrids();


    return 0;
}
