/* 
 * File:   main.cpp
 * Author: Paul Christy
 * Course: CMPSC 3543
 * Assignment1
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const double d_to_r = 0.0174532925;

// The keyword inline tells the compiler to compile
// and generate inline code as opposed to calling a
// function.  This avoids the runtime overhead of
// calling and returning from a function.  The keyword
// inline is the preferred way to generate inline code
// in C++ and should be used instead of #define.
// Question: What does it mean to generate inline code?
//
// The compiler ultimately determines whether an inline
// function is or is not treated as inline code as opposed
// to being a function that is called and returns.
//
// A function that is treated as inline is sometimes called
// a macro.  A #define is always treated as a macro.  As we
// will soon see, there is an advantage to using an inline
// function over #define.
inline const double convert(const double degrees) { return degrees*d_to_r; }

/*
 * 
 */
int main(int argc, char** argv) 
{
    double degrees = 0;   
    do {
        cout << "Input angle in degrees: ";
        // cin is used to read input.  In this case
        // integers are read from the input.
        cin >> degrees;
        if (degrees == 0) {
                cout << "Exiting the Program" << endl;
                exit(0);
        }
        else {
                cout << "\Radians is " << convert(degrees) << " rads." << endl;
        }
    } while(( degrees > 0) || (degrees < 0));
    return 0;
}

// Assignment 1 (10 points): Write a C++ program that
//  converts degrees to radians.  The program should
//  be similar to example 2 shown above.  The conversion
//  factor from degrees to radians is 0.0174532925, that
//  is, 1 degree = 0.0174532925 radian.  To get full credit
//  your program MUST
//    1. Declare the conversion factor as a constant double.
//    2. Declare an inline constant double conversion function
//       that converts a degree, passed as a constant double
//       parameter, to a constant radian value.  That is, the
//       inline function must return a constant double.
//    3. Use cout to display output and cin to read input and
//       endl to mark the end of line on output.
//    4. The program repeatedly displays the following prompt.
//          "Input angle in degrees: "
//       and reads the response ON THE SAME LINE as the prompt.
//    5. The program calls the inline function to convert degrees
//       to radians and displays the following output on a new line.
//          "Radians is xxx.xxxxxx rads."
//       where xxx.xxxxxx is the angle in radians.
//    6. The program continues to prompt and convert radians to
//       degrees until 0 is entered for degrees.  If 0 is entered,
//       terminate the program.
//
// Netbeans: If you use Netbeans, Create a Netbeans project named Assignment1.
// That will be the name of the folder where all your Netbeans files will be stored.
// When you complete assignment 1 compress your Netbeans project folder named Assignment1
// and submit the compressed file to Blackboard on or before the DUE DATE.  The due date
// will be announced in class and posted on Blackboard.

// No Netbeans: If you do not use Netbeans put your code (e.g., one file named main.cpp) in a
// directory named Assignment1.  When you complete the assignment compress folder Assignment1
// and submit the compressed file to Blackboard.

// In assignment 1 and all future assignments put the following
// comments at the beginning of your program.
//
//      Mary Smith
//      CMPSC 3543
//      Assignment 1
//
// Replace Mary Smith with your first and last name.  Of course, the
// assignment number will also be changed for assignments 2, 3, etc.
//
// Test your program on the following input:
//
//      60
//      57.2957795
//      -120
//      458.366236
//      -90
//      360
//      -114.591559

