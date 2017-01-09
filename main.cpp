/* 
 * File:   main.cpp
 * Author: pauzchr
 *
 * Created on March 12, 2015, 10:35 AM
 */

#include <cstdlib>
#include <iostream>
#include "Employee.h"
#include "Geometric.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    // To test the classes in files Employee.h, Employee.cpp and
    // Geometric.h, the main function in file main.cpp must do the
    // following.
   
    //  1. Create an Employee object named Sarah by passing the following
    //     information to the Employee constructor.
    //     name            SSN          building    cubicle     salary    
    //     Sarah Miller    789-01-5029  business    15          $56,805
    
    Employee Sarah("Sarah Miller", "789-01-5029", business, 15, 56805);

    //  2. Print the Sarah object.
    
    Sarah.print();
    cout << "\n";

    //  3. Create a Supervisor object named Sue by passing the following
    //     information to the Supervisor constructor.
    //     name            SSN          building    cubicle     salary    
    //     Sue Ackerman    201-33-8710  research    4           $71,020
    //
    //     department           section      projects
    //     Flight Simulator     software     6
    
    Supervisor Sue("Sue Ackerman", "201-33-8710", research, 4, 71020, "Flight Simulator",
    software, 6 );

    //  4. Print the Sue object.
    
    Sue.print();
    cout << "\n";

    //  5. Create a Triangle object named arrow_head by passing the following
    //     information to the Triangle constructor.
    //     a        b       c
    //     4.0      3.0     5.0
    
    Triangle arrow_head( 4.0, 3.0, 5.0 );

    //  6. Print the arrow_head object.
    
    arrow_head.print();
    cout << "\n";

    //  7. Create an Equilateral object named sign by passing the following
    //     information to the Equilateral constructor.
    //     side 
    //     7.2
    
    Equilateral sign( 7.2 );

    //  8. Print the sign object.
    
    sign.print();
    cout << "\n";

    //  9. Create an Ellipse object named oval by passing the following
    //     information to the Ellipse constructor.
    //     major axis       minor axis
    //     5.0              2.0
    
    Ellipse oval( 5.0, 2.0 );

    // 10. Print the oval object.
    
    oval.print();
    cout << "\n";

    // 11. Create a Circle object named ring by passing the following
    //     information to the Ellipse constructor.
    //     radius
    //     4.5
    
    Circle ring( 4.5 );

    // 12. Print the ring object.
    
    ring.print();
    cout << "\n";

    // 13. Create a Triangle object by using the new operator and a pointer
    //     as follows.
    //     Triangle* t = new Triangle(5.2,4.6,5.2);
    
    Triangle* t = new Triangle( 5.2, 4.6, 5.2 );

    // 14. Print the Triangle object pointed to by t.
    
    t->print();

    return 0;
}

