/* 
 * File:   main.cpp
 * Author: pauzchr
 *
 * Created on April 9, 2015, 1:14 PM
 */

#include <cstdlib>
#include "Order.h"
#include "Queue.h"
#include "Queue.cpp"

using namespace std;

// Assignment 5 (25 points): In this assignment you are asked to
//  create a template class named Queue the implements a circular
//  queue.  A circular queue will be explained in more detail in
//  lecture.  In any queue, whether it is circular or not, items
//  are placed on the queue at one end, sometimes referred to as
//  the head of the queue, and taken off the queue at the other
//  end, sometimes referred to as the tail of the queue.  A queue
//  simulates such things as customers waiting to be serviced by
//  a bank teller, automobiles pulling up to a toll booth, customers
//  pulling up to a fast food drive through, etc.  The first customer,
//  car, etc. to enter the queue, is the first one taken off the queue
//  to be serviced.

int main(int argc, char** argv) {

// Now consider the code in function main.cpp that tests your template
// class Queue.  Function main in main.cpp creates a queue of characters
//// of size 8.  It then stores the name Sally into the queue, one letter
// at a time.  It then empties the queue by taking (dequeuing) one letter
// at a time until the queue is empty.  Do NOT assume that 5 items are in
// the queue.  Dequeue items until the queue becomes empty and use member
// function isEmpty to determine when the queue becomes empty.  Display
// letters taken from the queue all on a single line separated by a space.
// A name like Sally would display as
//      S a l l y

    Queue<char> c_queue(8);
    
    c_queue.EnQueue('S');
    c_queue.EnQueue('a'); 
    c_queue.EnQueue('l');
    c_queue.EnQueue('l'); 
    c_queue.EnQueue('y');
    
    while ( !c_queue.isEmpty() ) 
    {
        cout << c_queue.DeQueue() << " ";
    }
    cout << endl;
    
    cout << endl;
  
// Note that, unlike a stack, a queue does not reverse the order of items.
// Next, create a queue of doubles of size 4.  Then declare a double array
// having the following numbers in it.
//       0.8, -1.7, 5.0, 2.2, 9.6, -5.3
  
    Queue<float> f_queue(4);
    
    const double a[] = { 0.8, -1.7, 5.0, 2.2, 9.6, -5.3 };
    
    for( int i = 0; i < sizeof(a)/sizeof(double); ++i )
    {
        f_queue.EnQueue(a[i]);
    }
    
    while ( !f_queue.isEmpty() )
    {
        cout << f_queue.DeQueue() << " ";
    }
    cout << endl;
    
    cout << endl;
  
// Put the numbers in the queue in the above order.  Note that this will
// make member function enqueue allocate a new queue of size 8 because
// an initial queue of size 4 cannot hold the 6 numbers above.  Consequently,
// your program should display the following messages as output.
//
//  The queue was full.
//  Reallocated 8 queue elements and copied queue to reallocated space.
//
// Why were 8 queue elements reallocated in this case?  After all 6 numbers
// are placed in the queue, empty the queue, displaying each number taken
// from the queue on a single line, each separated by a space.  Dequeue
// items from the queue until it is empty.  Do not assume that 6 numbers
// were in the queue.  Us member function isEmpty to determine when the
// queue is empty.
    
// After class Order has been written, function main in main.cpp will
// use it to put objects of type Order onto a queue as follows.  Create
// an array named meal of Order objects in main.cpp as follows.
//
//    Order meal[] = {
//        Order(312,4.95,"burger, fries, drink"),
//        Order(245,4.15,"burger, drink"),
//        Order(207,1.45,"fries, drink"),
//        Order(156,0.65,"fries"),
//        Order(198,4.70,"combo")
//    };

    Order meal[] = 
    {
        Order( 312, 4.95, "burger, fries, drink" ),
        Order( 245, 4.15, "burger, drink" ),
        Order( 207, 1.45, "fries, drink" ),
        Order( 156, 0.65, "fries" ),
        Order( 198, 4.70, "combo" )  
    };
//
// Then create a queue of Order objects of size 3.  Then put the 5 elements
// of array meal on the queue.  Note that the messages
//
//  The queue was full.
//  Reallocated 6 queue elements and copied queue to reallocated space.
//
// will be displayed when the Order objects are placed onto the queue.  Why
// are these messages displayed and why were 6 queue elements reallocated in
// this case?  After the Order objects are on the queue, empty the queue.  As
// the queue is emptied, call the print member function of class Order to
// display each order that is dequeued on a separate line.  In this case the
// output will look as follows.
//
//  order number: 312, meal: burger, fries, drink, price: $4.95
//  order number: 245, meal: burger, drink, price: $4.15
//  order number: 207, meal: fries, drink, price: $1.45
//  order number: 156, meal: fries, price: $0.65
//  order number: 198, meal: combo, price: $4.7
//
// Use Queue member function isEmpty to determine when the queue becomes
// empty.  Do not assume 5 elements are in the queue.
 
    Queue<Order> o_queue(3);
    
    const int o_size = sizeof(meal)/sizeof(Order);
    
    for ( int i = 0; i < o_size; ++i )
    {
        o_queue.EnQueue( meal[i] );
    }
    
    while ( !o_queue.isEmpty() )
    {
        o_queue.DeQueue().print();
    }
     
    return 0;
}

