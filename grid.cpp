#include <iostream>
#include "grid.h"

grid::grid() {

}

int grid::getX() const {
    // return X value
    return this->userX;
}

int grid::getY() const {
    // return Y value
    return this->userY;

}

void grid::setX(int userInX) {
    // set X value
    this->userX = userInX;
}

void grid::setY(int userInY) {
    // set Y value
    this->userY = userInY;
}

void grid::gridFormation(int getX, int getY) {

    int sizeX = getX;
    int sizeY = getY;

    gridArrayFunc(getX, getY);

    //cout << "Assigning Array 0's" << endl;
    for (int i = 0; i < sizeX; i++){
        for (int j = 0; j < sizeY; j++){
            gridArray[i][j] = 0;
        }
    }
    // assign 1's to the grid
    for (int indexVal = 0; indexVal < (sizeX*sizeY)/3; indexVal++){
        int indexPoint;
        do{
            indexPoint = rand()%(sizeX*sizeY);
        }while (gridArray[indexPoint/sizeY][indexPoint%sizeY]==1);
        gridArray[indexPoint/sizeY][indexPoint%sizeY]=1;
    }
    // print the Grid
    for (int i = 0; i < sizeX; i++){
        for (int j = 0; j < sizeY; j++){
            cout << gridArray[i][j];
        }
        cout << endl;
    }

}

void grid::getXY(int getX, int getY) {
    // set X/Y values for grids
    setX(getX);
    setY(getY);

}

void grid::compareGrids(int **array, int **array2) {
    // create comparison grid
    compArray = new int*[userX];
    for (int o = 0; o < userX; o++){
        compArray[o] = new int[userY];
    }
    // compare grids, assign comparison grid
    for (int i = 0; i < userX; i++) {
        for(int j = 0; j < userY; j++){
            if((array[i][j] == array2[i][j]) && (array[i][j] == 1)){
                compArray[i][j] = 1;
            } else {
                compArray[i][j] = 0;
            }
        }
    }
    // print comprarison grid
    for (int i = 0; i < userX; i++){
        for (int j = 0; j < userY; j++){
            cout << compArray[i][j];
        }
        cout << endl;
    }
    if (compArray != nullptr){
        delete[] compArray;
        compArray = nullptr;
    }

}

void grid::gridArrayFunc(int getX, int getY) {
    int sizeX = getX;
    int sizeY = getY;
    gridArray = new int*[sizeX];

    for (int i = 0; i < sizeX; i++) {
        gridArray[i] = new int[sizeY];
    }
}

int** grid::getArray() {
    return gridArray;
}


void grid::deleteGrids(){
    if (gridArray != nullptr) {
        delete[] gridArray;
        gridArray = nullptr;
    }
}



