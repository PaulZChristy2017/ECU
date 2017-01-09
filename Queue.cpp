#include "Queue.h"
#include <iostream>

using namespace std;

//  The template class Queue will be written similar to example 12.
//  Class Queue will have its member variables and member function
//  prototypes declared in a header file named Queue.h and have its
//  member function implementation (code) in a separate C++ source
//  file named Queue.cpp.

// Now Consider the implementation code in Queue.cpp.  The constructor
// is passed a single parameter which determines the size of the queue.
// This parameter MUST be given the default value 10 in the prototype
// in file Queue.h.  In Queue.cpp, the constructor code takes the parameter
// and initializes max_len with it.  The constructor then allocates space
// for a new array of size max_len of type TYPE and sets number to zero
// since initially the queue is empty.  Then head is set to max_len-1 and
// tail to zero.  In a circular queue that is how head and tail are
// initialized.  As items are placed on and taken off the queue, head and
// tail are incremented and are viewed as "chasing" one another around the
// circular queue (refer to the discussion given during lecture).

template <class TYPE>
    Queue<TYPE>::Queue(const int size) : max_len(size)
    { s = new TYPE[size]; number = 0; head = max_len - 1; tail = 0; }

// The destructor code in Queue.cpp deletes the space allocated to array s
// thereby deleting the queue.

template <class TYPE>
    Queue<TYPE>::~Queue() { delete []s; }

// Member function enqueue puts an item, passed as a parameter, at the head
// of the queue, provided the queue is not full.  Function enqueue first
// checks to see if the queue is full.  If the queue is not full, it increments
// number, increments head modulo max_len (ask the instructor what this means
// if this is not clear) and stores the item placed in the queue at index
// head.  If the queue is full, enqueue allocates space for a new array t
// of size twice the value of max_len.  It then copies all elements from s
// to t.  It updates max_len to the size of the new array t, deletes s and
// sets s to t.  Then it displays the following two messages
//
//  The queue was full.
//  Reallocated xxx queue elements and copied queue to reallocated space.
//
// where xxx was the new number of elements in the newly allocated queue.
// After Updating the queue, it then places the item in the new queue.
// That is, it does what it normally does when the queue is not full, namely,
// it increments number, increments head modulo max_len (using the new value
// of max_len) and stores the item placed in the queue at index head.

template <class TYPE>
void Queue<TYPE>::EnQueue(const TYPE x) 
{     
    TYPE* t = new TYPE[max_len*2];
    if ( number != max_len )
    {
        number++;
        s[++head % max_len] = x;
    }
    
    if ( number == max_len )
    {
        //
        t[max_len/2] = x;
        for( int i = 0; i < max_len; ++i )
        {
            t[i] = s[i];
        }
        
        max_len = max_len * 2;   
        delete []s;
        s = new TYPE[max_len];
        s = t;
        
        // 0.8, -1.7, 5.0, 2.2, 9.6, -5.3
        
        head = --head - number--;
            
        //  The queue was full.
        //  Reallocated xxx queue elements and copied queue to reallocated space.
        cout << "The queue was full." << endl;
        cout << "Reallocated " << max_len << " queue elements and "
                    "copied queue to reallocated space." << endl;
            
        number++;
        s[++head % max_len] = x;
    }
}

// Now consider member function dequeue.  This function checks to determine
// whether the queue is empty.  If the queue is empty, it simply returns.
// If the queue is not empty, it gets the item at index tail, increments
// tail modulo max_len and returns the item obtained from the queue.

template <class TYPE>
    TYPE Queue<TYPE>::DeQueue() 
    {
        TYPE item;
        if ( number != 0 )
        {
            number--;
            return s[tail++ % max_len]; 
        }
        
        if ( number == 0 ) 
            return item;
    }

// Member function getHead returns the item in the queue at index head,
// provided the queue is not empty.

template <class TYPE>
    TYPE Queue<TYPE>::getHead() const { return s[head]; }

// Member function getTail returns the item in the queue at index tail,
// provided the queue is not empty.

template <class TYPE>
    TYPE Queue<TYPE>::getTail() const { return s[tail]; }

// Member function isEmpty returns true if the queue is empty and false
// otherwise.

template <class TYPE>
    bool Queue<TYPE>::isEmpty() const 
{
    if ( number == 0 )
        return 1;
    else 
        return 0;
}

// Member function isFull returns true if the queue is full and false
// otherwise.

template <class TYPE>
    bool Queue<TYPE>::isFull() const 
{
    if ( number == max_len )
        return 1;
    else
        return 0;
}