/* 
 * File:   Order.h
 * Author: pauzchr
 *
 * Created on April 9, 2015, 1:24 PM
 */

#ifndef ORDER_H
#define	ORDER_H

#include <iostream>
#include <string.h>

using namespace std;

const int DSIZE = 80;

// Class Order will have two constructors and a public print function.  The
// first constructor has no parameters.  It sets private member variables
// number and price to zero, and initializes character meal as meal[0]=0.
// This essentially makes meal the empty string.  The second constructor
// has 3 constant parameters n, p and m.  Parameter n is a constant integer
// that is an order number.  Parameter p is a constant float that is the
// price of a meal.  Parameter m is a constant character pointer that points
// to a character string that describes a meal.  Parameters n, p and m are
// used to initialize private member variables number, price and meal,
// respectively.
//

class Order
{
    
// Next, function main creates a queue of size 3.  The elements stored in
// the queue are objects of class Order.  To complete this part, you need
// to create a new header file for the project named Order.h.  In Order.h
// declare a new class named Order.  Class Order will not be a template
// class.  Class Order will serve a role similar to what class Point did
// in example 12.  Class Order will have the following private member
// variables.
//
//  variable    type        description
//
//  number      int         order number for a meal at a fast food restaurant
//  price       float       price of a meal
//  meal        char[DSIZE] character array that describes a meal where DSIZE
//                          is a constant integer having the value 80    
    
private:
    int   number;
    float price;
    char  meal[DSIZE];
    
// Public member function print of class Order displays a message such as
//
//      order number: 207, meal: fries, drink, price: $1.45
//
// if the order number was 207, the meal was "fries, drink" and the price
// was $1.45.
//
// The private member variables, constructor and member functions should
// all have their declaration, prototype and implementation (code) placed
// in header file Order.h.
//

    
public:
    
    Order() 
    {
        number  = 0;
        price   = 0;
        meal[0] = 0;
    }
    
    Order( const int n, const float p, const char *m )
    {
        number = n;
        price  = p;
        strncpy( meal, m, sizeof(meal) );
    }
 /*
    Point() : x(0), y(0) {}   
    Point(const double a, const double b) : x(a), y(b) {}
 */   
    
    void print() const { cout << "order number: " << number << " meal: " 
            << meal << " price: $"  << price << endl; }
    
};

#endif	/* ORDER_H */

