#include <iostream>
#include "grid.h"

grid::grid() {

}

int grid::getX() const {
    return this->userX;
}

int grid::getY() const {
    return this->userY;

}

void grid::setX(int userInX) {
    this->userX = userInX;
}

void grid::setY(int userInY) {
    this->userY = userInY;
}

void grid::gridFormation(int getX, int getY) {

    int sizeX = getX;
    int sizeY = getY;

    gridArrayFunc(getX, getY);

    /*

    for (int i = 0; i < sizeX; i++) {
        delete[] gridArray[i];
    }
    delete[] gridArray;
    gridArray = nullptr;
    */

    //cout << "Assigning Array 0's" << endl;
    for (int i = 0; i < sizeY; i++){
        for (int j = 0; j < sizeX; j++){
            gridArray[i][j] = 0;
        }
        cout << endl;
    }


    for (int indexVal = 0; indexVal < (sizeX*sizeY)/3; indexVal++){
        int indexPoint;
        do{
            indexPoint = rand()%(sizeX*sizeY);
        }while (gridArray[indexPoint/sizeX][indexPoint%sizeX]==1);
        gridArray[indexPoint/sizeX][indexPoint%sizeX]=1;
    }

    cout << "Array: " << endl;
    for (int i = 0; i < sizeY; i++){
        for (int j = 0; j < sizeX; j++){
            cout << gridArray[i][j];
        }
        cout << endl;
    }

}

void grid::getXY() {
    int userInX;
    int userInY;
    cout << "Input x: " << endl;
    cin >> userInX;
    setX(userInX);
    cout << "Input y: " << endl;
    cin >> userInY;
    setY(userInY);

}

void grid::compareGrids(int *array, int *array2) {

}

void grid::gridArrayFunc(int getX, int getY) {
    int sizeX = getX;
    int sizeY = getY;
    gridArray = new int*[sizeY];

    for (int i = 0; i < sizeY; i++) {
        gridArray[i] = new int[sizeX];
    }
}


