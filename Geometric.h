/* 
 * File:   Geometric.h
 * Author: pauzchr
 *
 * Created on March 12, 2015, 10:39 AM
 */

#include <math.h>
#include <iostream> 

using namespace std;

#ifndef GEOMETRIC_H
#define	GEOMETRIC_H

// Now consider header file Geometric.h.  This file is similar to
// Shape.h in example 10.  File Geometric.h contains an abstract
// base class named Geometric that is almost identical to the base
// abstract class Shape in Shape.h.  Class Geometric has two private
// pure virtual functions named Area and Perimeter.  It also contains
// two protected double variables named area and perimeter.

class Geometric
{
    
private:
    
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
    
protected:
    
    double area;
    double perimeter;
};

// File Geometric will also contain two classes named Triangle and
// Ellipse that are inherited from Geometric.  First, consider class
// Triangle.  Class Triangle has 3 protected doubles named a, b and c
// which represent the 3 sides of a triangle.  Class Triangle has two
// private member functions named Area and Perimeter which each return
// a double.  Function Area calculates the area of a triangle having
// sides a, b and c.  Function Perimeter calculates the perimeter of
// a triangle with sides a, b and c.  The formulas for area and perimeter
// are given in a separate document.  The implementation (code) for
// functions Area and Perimeter are put in header file Geometric.h.

class Triangle: public Geometric
{
    
protected:
    
    double a;
    double b;
    double c;

private:
    
    
    double Area() const { double s = a + b + c; return sqrt( ( s )/2.0 * ( ( s )/2.0 - a ) * 
            ( ( s )/2.0 - b ) * ( ( s )/2.0 - c ) ); }
    double Perimeter() const { return a + b + c; }
    
public:
    
    // Class Triangle contains a public constructor and print function.
    // The constructor is passed 3 constant double parameters x, y and z,
    // and it initializes the protected variables a, b and c with the
    // values of x, y and z, respectively.  The constructor then calls
    // private functions Area and Perimeter to calculate the area and
    // perimeter of the triangle and stores the values in protected member
    // variables area and perimeter, respectively, of base class Geometric.
    // The print function displays the sides a, b and c of the triangle,
    // and the area and perimeter of the triangle.  The implementation (code)
    // for the constructor and print function are put in header file Geometric.h.
    
    Triangle( const double x, const double y, const double z ) : a(x), b(y), c(z)
    {
        area = Area();
        perimeter = Perimeter();
    }
    
    void print()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "area = " << area << endl;
        cout << "perimeter = " << perimeter << endl;
    }
};

// Another class named Equilateral is derived from class Triangle
// and it represents an equilateral triangle, i.e., a triangle
// all of whose sides are equal (have the same length).
// Class Equilateral has a public constructor and print function.
// The constructor has a single constant double parameter that is
// the length of the common side.  The constructor calls the
// Triangle constructor, passing the common side for all three
// parameters of the Triangle constructor.  The print function
// displays the common side of the triangle, together with the
// area and perimeter of the triangle.

class Equilateral: public Triangle
{
    
public:
    
    Equilateral( const double cs ) : Triangle( cs, cs, cs ) { }
    
    void print() const
    {
        cout << "common side = " << a << endl;
        cout << "area = " << area << endl;
        cout << "perimeter = " << perimeter << endl;    
    }
};


// The second class in Geometric.h that is derived from base class
// Geometric is class Ellipse.  Class Ellipse represents an ellipse.
// Class Ellipse has two protected member variables named majorAxis
// and minorAxis.  They represent the major and minor axes of an ellipse.
// Class Ellipse has two private member functions named Area and
// Perimeter that calculate the area and perimeter (also called the
// circumference) of an ellipse.  The formulas for area and perimeter
// are given in a separate document.

class Ellipse: public Geometric 
{
    
protected:
    
    double majorAxis;
    double minorAxis;
    
private:
    
    double Area() const { return M_PI * majorAxis * minorAxis; }
    double Perimeter() const { return 2.0 * M_PI * sqrt( ( majorAxis * majorAxis 
            + minorAxis * minorAxis )/2.0 ); }
    
public:
    
    // Class Ellipse has a public constructor and print function.  The
    // constructor has two parameters, the major and minor axes of the
    // ellipse.  The constructor uses the parameters to initialize protected
    // member variables majorAxis and minorAxis, respectively.  Then the
    // constructor calls private functions Area and Perimeter to calculate
    // the area and perimeter of the ellipse and store the results in
    // protected member variables area and perimeter of base class Geometric.
    // The public print function displays the major and minor axes of the
    // ellipse, together with the area and perimeter (also called the
    // circumference) of the ellipse.

    Ellipse( const double x, const double y ) : majorAxis(x), minorAxis(y) 
    { 
        area = Area();
        perimeter = Perimeter();        
    }
    
    void print() const
    {
        cout << "majorAxis = " << majorAxis << endl;
        cout << "minorAxis = " << minorAxis << endl;
        cout << "area = " << area << endl;
        cout << "perimeter = " << perimeter << endl;    
    }

};

// Another class named Circle is derived from class Ellipse.  Class
// circle has a public constructor and print function.  The constructor
// has a single parameter, which is the radius of the circle.  The
// constructor calls the Ellipse constructor, passing it the radius
// for both the major and minor axis.  The print function prints the
// radius, together with the area and perimeter (also called the
// circumference) of the circle.

class Circle: public Ellipse
{
    
public:
    
    Circle( const double r ) : Ellipse( r, r ) { }
    
    void print() const
    {
        cout << "radius = " << majorAxis << endl;
        cout << "area = " << area << endl;
        cout << "perimeter = " << perimeter << endl;    
    }
};

#endif	/* GEOMETRIC_H */

