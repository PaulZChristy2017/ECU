/* 
 * File:   main.cpp
 * Author: Paul Christy
 * Class: Object Oriented Programming
 * Created on February 4, 2015, 3:17 PM
 */

#include <cstdlib>
#include "Vector.h"

using namespace std;

int main(int argc, char** argv) 
{
    double x[] = { 8.5, -2.0,  0.0,  4.2,   8.0,  -3.5,  0.7 };
    Vector vector;
    int s = sizeof(x)/sizeof(double);
    vector.setVector(s,x);
    vector.print();
    vector.print(4);
    double a[30];
    s = sizeof(a)/sizeof(double);
    for ( int i = 0; i < s; ++i )
        a[i] = 30-i;
    s = sizeof(a)/sizeof(double);
    vector.setVector(s,a);
    vector.print();
    cout << endl;   
    double y[] = { 0.5, -2.0, -1.0,  0.0,   4.1 };
    s = sizeof(y)/sizeof(double);
    Vector vy(s,y);
    vy.print();
    s = sizeof(x)/sizeof(double);
    Vector vx(s,x);
    vx.print();
    Vector vu(s,a);
    vu = vx + vy;
    vu.print();
    cout << endl;
    Vector vw(s,a);
    vw = vx - vy;
    vw.print();
    cout << endl;
    Vector vz(s,a);
    vz = vy - vx;
    vz.print();
    s = sizeof(x)/sizeof(double);
    Vector my_vector(-s,x);
    return 0;
}

