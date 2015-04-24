#include <iostream >
#include "Point.h"
using namespace std;

int main()

{
        Point p1(1,2);
        Point p2(4,5);
        Point p3=p1+p2;
        Point p4=p1.operator+(p2);
        Point p5=p1+p2+p3+p4;
        p1.print();
        p3.print();
        p4.print();
        p5.print();

}
