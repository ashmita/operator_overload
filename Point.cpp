#include<iostream>
using namespace std;
#include "Point.h"



     Point ::  Point(int x, int y)
        {
            this->x=x;
            this->y=y;
        }

     Point ::  Point()
        {
            x=0;
            y=0;
        }

    int  Point ::  getX()
        {
            return x;
        }

    void  Point ::  setX(int x)
        {
            this->x=x;
        }

    int   Point ::  getY()
        {
            return y;
        }

    void  Point ::  setY( int y)
        {
            this->y=y;
        }

    void   Point ::  setXY(int x, int y)
        {
            setX(x);
            setY(y);

        }

 void  Point ::  print()
         {
             cout<<"(" <<getX() << ","<<getY()<< ")" << endl;
         }

 Point Point::operator+(Point p)const
     {
         Point pp;
         pp.setXY(x+p.getX(), y+p.getY());
         return pp;
     }



