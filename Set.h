/* 
 * File:   Set.h
 * Author: pauzchr
 *
 * Created on February 12, 2015, 1:53 PM
 */

#include <string.h>
#include <iostream>

using namespace std;

#ifndef SET_H
#define	SET_H

// Assignment 3 (25 points): Assignment 3 is similar
//  to example 8.  For this assignment, declare a class
//  named Set in C++ header file Set.h.  Class Set has
//  the following two private member variables.
//   1. set: a pointer to a double
//   2. number: an integer which contains the number of
//      of elements in the set.

class Set 
{
    private:
        double* set;
        int     number;   
    public:
        
        // Class Set has the following two constructors.
        //   1. A constructor that has no parameters that creates
        //      an empty set by setting set to NULL and number to
        //      zero.  It then uses cout to display the following
        //      message.
        //          An empty set will be created.
        
        Set() 
        {
            number = 0;
            set = NULL;
            cout << "An empty set will be created." << endl;
        }
        
        //   2. A constructor that has the following two parameters.
        //      a. number: which is received as a constant parameter
        //         and represents the number of elements in a set.
        //      b. set: which is received as a constant pointer to
        //         a double array which contains the elements of a set.
        //      The names of the parameters MUST be number and set.
        //      Since these names match the names of the private member
        //      variables of class Set, you will have to use the this->
        //      operator (notation) to refer to the private member variables.

        Set(const int number, const double* set ) 
        {
            //      number > 0: If number is greater than zero, the constructor
            //                  sets private member variable number to the parameter
            //                  number.  Then it allocates a double array of size
            //                  number using the new operator, making private member
            //                  variable set, point to the newly allocated array.  It
            //                  then copies the elements of array set, passed as the
            //                  second parameter, to private member variable array
            //                  set.  This initializes a Set object having number
            //                  elements.
            if ( number > 0)
            {
                this->number = number;
                this->set = new double[number];
                for ( int i = 0; i < number; i++ )
                {
                    this->set[i] = set[i];
                }
            }
            
            //      number == 0: If number is equal to zero, the constructor sets
            //                   private member variable number to zero and sets
            //                   private pointer set to NULL.  This creates the empty
            //                   set.  It then uses cout to display the following
            //                   message.
            //                       An empty set will be created.
            else if ( number == 0 )
            {
                this->number = 0;
                this->set = NULL;
                cout << "An empty set will be created." << endl;
            }
            
            //      number < 0: If number is less than zero, the constructor uses cerr
            //                  to display the following error messages.
            //                      xxx must be greater than or equal to zero.
            //                      An empty set will be created.
            //                  where xxx is the value of parameter number.  After
            //                  displaying the above messages, the constructor creates
            //                  the empty set (as in the case number == 0).            
            else if ( number < 0 )
            {
                cerr << number << " must be greater than or equal to zero" << endl;
                cerr << "An empty set will be created." << endl;
                this->number = 0;
                this->set = NULL;
            }
        }
        
        // Class Set has a single public print function that prints the elements
        // of the Set object, ALL on a SINGLE line.  The print function should have
        // a prototype that uses const just as in example 8.
        
        // void print() const { cout << s << endl; }
        
        void print() const 
        {
            for( int i = 0; i < number; ++i ) 
            {
                cout << this->set[i] << " ";
            }
            cout << endl;
        }
        
        // Class Set has a public member function named getNumber that gets the
        // number of elements in a Set object.  The prototype of getNumber must
        // use const similar to function getString in example 8.
        
        const int getNumber() const { return number; }
        
        // Class Set has a public member function named getSet that gets the
        // pointer to a Set object.  The prototype of getSet must use const similar
        // to function getString in example 8.
        
        const double* getSet() const { return this->set; }
        
        // Class Set has a public member function named setSet that updates a Set
        // object.  Function setSet is similar to function setString in example 8.
        // Function setSet has the following two parameters.
        //      a. n: which is received as a constant parameter
        //         and represents the number of elements in a set.
        //      b. s: which is received as a constant pointer to
        //         a double array which contains the elements of a set.
        //
        //      Function setSet examines the value of parameters n and s
        //      does the following.
        
        void setSet( const int n, const double* s) 
        {
            //      n > 0: If n is greater than zero, the constructor sets private
            //             member variable number to the parameter.  Then it deletes
            //             set.  After deleting set, it allocates a double array of
            //             size number using the new operator, making private member
            //             variable set, point to the newly allocated array.  It then
            //             copies the elements of array set, passed as the second
            //             parameter, to private member variable array set.  This
            //             reinitializes a Set object having number elements.
            
            if (( n > 0 ) && ( s != NULL ))
            {
                this->number = n;
                delete []this->set;
                this->set = new double[number];
                for( int i = 0; i < number; ++i )    
                {
                    this->set[i] = s[i];
                }
            }
            
            //      n == 0 or s == NULL: If n is equal to zero or s is NULL, function
            //             setSet sets private member variable number to zero and sets
            //             private pointer set to NULL.  This creates the empty set.
            //             It then uses cout to display the following message.
            //                  An empty set will be created.
            
            else if (( n == 0 ) || ( s == NULL )) 
            {
                this->number = 0;
                this->set = NULL;
                cout << "An empty set will be created." << endl;
            } 
            
            //      n < 0: If n is less than zero, function setSet uses cerr to
            //             display the following error messages.
            //                  xxx must be greater than or equal to zero.
            //                  An empty set will be created.
            //             where xxx is the value of parameter n.  After displaying
            //             the above messages, function setSet creates the empty set.            
            
            else if (( n < 0 ) && ( s != NULL ))
            {
                cerr << n << " must be greater than or equal to zero." << endl;
                cerr << "An empty set will be created." << endl;
                this->number = 0;
                this->set = NULL;
            }
        }

        // Must declare as a friend function.
        // Remove friend and see what happens.
        // One difference between operator + here
        // and the one in example 6 is that this
        // operator's prototype is declared in the
        // class.  If the prototype is declared in
        // the class it must be a friend function.
        // However, as in example 6, its implementation
        // is defined outside the class.
        
        // Class Set has two friend functions that implement the operators + and *
        // where + is set union and * is set intersection defined as follows.
        // Consider two Set objects X and Y where
        //  X = { -6.2, -3.1, 0.0, 1.9, 5.2, 8.3, 9.5, 10.7, 11.0, 12.5 }
        //  Y = { -8.1, -3.1, 0.0, 2.5, 5.8, 8.3, 9.5, 11.0 }
        // Then
        //  X + Y = { -8.1, -6.2, -3.1, 0.0, 1.9, 2.5, 5.2, 5.8, 8.3, 9.5, 10.,7 11.0, 12.5 }
        //  X * Y = { -3.1, 0.0, 8.3, 9.5, 11.0 }
        // That is, X + Y is the union of set X with set Y and X * Y is the
        // intersection of set X with set Y.
        // For + and * you may assume that the sets X and Y are in ascending order.
        // This makes the construction of X + Y and X * Y easier.  The sets X + Y
        // and X * Y MUST also be in ascending order.  If you implement + and *
        // correctly you will NOT have to do any sorting.  Ask the instructor if
        // you have questions.
        
        friend Set operator+(const Set X, const Set Y);
        friend Set operator*(const Set a, const Set b);
};

// Note: The + operator caused a runtime error
//       if a destructor was declared for class
//       Set.
Set operator+(const Set X, const Set Y)
{
    double* a = (double*)X.getSet();
    double* b = (double*)Y.getSet();
    
    int na = (int)X.getNumber();
    int nb = (int)Y.getNumber();
    
    int i = 0, j = 0 , k = 0;  
    int  size = ( X.getNumber() + Y.getNumber() );
    double  c[size];
    
    for ( i = 0, j = 0, k = 0; i < na && j < nb; )
    {
        if ( a[i] < b[j] )
        {
            c[k] = a[i];
            i++;
            k++;
        }
        
        else if ( a[i] == b[j] )
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
        
        else if ( a[i] > b[j] )
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    
    if ( i < na)
    {
        while ( i < na )
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
    
    else if ( j < nb )
    {
        while ( j < nb )
        {
            c[k] = b[j];
            j++;
            k++;
        }
        i++;
        k++;
    }
    
    for ( ; size > k ; size-- )
    {
        c[k] = c[size];
    }
    
    Set temp(size,c);
    
    return temp;
}


Set operator*(const Set X, const Set Y)
{
    //
    double* a = (double*)X.getSet();
    double* b = (double*)Y.getSet();
    
    int na = (int)X.getNumber();
    int nb = (int)Y.getNumber();
    
    int i = 0, j = 0 , k = 0;  
    int  size = ( X.getNumber() + Y.getNumber() );
    double  c[size];
    
    for ( i = 0, j = 0, k = 0; i < na && j < nb;)
    {
        if ( a[i] == b[j] )
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
        else if ( a[i] > b[j] )
        {
            j++;
        }
        
        else if ( a[i] < b[j] )
        {
            i++;
        }
    }
    
    for ( ; size > k ; size-- )
    {
        c[k] = c[size];
    }
  
    Set temp(size,c);
    
    return temp;
}
#endif	/* SET_H */

