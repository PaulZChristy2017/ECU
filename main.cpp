/* 
 * File:   main.cpp
 * Author: pauzchr
 * Course: Object Oriented Programming
 * Assignment 3
 * Created on February 12, 2015, 1:52 PM
 */

#include <cstdlib>
#include <iostream>
#include "Set.h"

using namespace std;

// To test class Set your main program should do the following.

int main(int argc, char** argv) 
{
    //  1. Declare two double arrays a and b that contain the following values
    //     (in the given order).
    //     array a = -6.2, -3.1, 0.0, 1.9, 5.2, 8.3, 9.5, 10.7, 11.0, 12.5
    //     array b = -8.1, -3.1, 0.0, 2.5, 5.8, 8.3, 9.5, 11.0
    double a[] = { -6.2, -3.1, 0.0, 1.9, 5.2, 8.3, 9.5, 10.7, 11.0, 12.5 };
    double b[] = { -8.1, -3.1, 0.0, 2.5, 5.8, 8.3, 9.5, 11.0 };
    
    //  2. Calculate the size of a and b using the sizeof function.  DO NOT assume
    //     that array a has 10 elements and DO NOT assume b has 8 elements.
    int na = sizeof(a)/sizeof(double);
    int nb = sizeof(b)/sizeof(double);
    
    //  3. If na is the size of a and nb the size of b then create a Set object
    //     named X using the constructor that takes NO parameters (this makes X
    //     the empty set).  Then use the setSet function for set X, passing it
    //     na and a.  This sets X to a set that contains the numbers in array a.
    Set X;
    X.setSet(na,a);
    
    //  4. Then print X.
    X.print();
    
    //  5. Create a second Set object named Y with the constructor that takes two
    //     parameters.  Pass nb and b to the constructor.
    Set Y(nb,b);
    
    //  6. Then print Y.
    Y.print();
    
    //  7. Create a Set object named Z using the constructor that takes NO parameters
    //     (this makes Z the empty set).
    Set Z;
    
    //  8. Calculate the set union Z = X + Y and print Z.
    Z = X + Y;
    Z.print();
    
    //  9. Calculate the set intersection Z = X * Y and print Z.
    Z = X * Y;
    Z.print();
    
    //  10. Attempt to create Set object U as follows.
    //      Set U(-na,a);
    Set U(-na, a);
    
    //  11. Reset set Z as follows
    //      Z.setSet(nb,NULL);
    Z.setSet(nb,NULL);
    
    return 0;
}

