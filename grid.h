#ifndef HOMEWORK_3_GRID_H
#define HOMEWORK_3_GRID_H
using namespace std;

class grid {
private:
    typedef int* arrPtr;
    int userX;
    int userY;
    arrPtr *gridArray;
    arrPtr *compArray;


public:
    grid();
    int getX() const;
    int getY() const;
    void setX(int userInX);
    void setY(int userInY);
    void gridFormation(int getX,int getY);
    void getXY(int getX, int getY);
    void compareGrids(int **array, int **array2);
    void gridArrayFunc(int getX, int getY);
    int** getArray();
    void deleteGrids();
};


#endif //HOMEWORK_3_GRID_H
