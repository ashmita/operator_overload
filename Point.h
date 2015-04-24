#include<iostream>
using namespace std;

class Point{

private:
    int x;
    int y;

public:
    Point(int x, int y);
    Point();
    int  getX();
    void  setX(int x);
    int  getY();
    void  setY(int y);
    void setXY(int x, int y);
    void print();
    Point operator+(Point p)const;

};

