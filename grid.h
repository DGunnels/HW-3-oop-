//
// Created by joker on 2/26/2019.
//

#ifndef HOMEWORK_3_GRID_H
#define HOMEWORK_3_GRID_H
using namespace std;

class grid {
private:
    int userX;
    int userY;
    int** gridArray;



public:
    grid();
    int getX() const;
    int getY() const;
    void setX(int userInX);
    void setY(int userInY);
    void gridFormation(int getX,int getY);
    void getXY();
    void compareGrids(int *array, int *array2);
    void gridArrayFunc(int getX, int getY);
    void printGrid(int *array);
};


#endif //HOMEWORK_3_GRID_H
