/* 
 * File:   Queue.h
 * Author: pauzchr
 *
 * Created on April 9, 2015, 1:18 PM
 */

#ifndef QUEUE_H
#define	QUEUE_H

//  The template class Queue will be written similar to example 12.
//  Class Queue will have its member variables and member function
//  prototypes declared in a header file named Queue.h and have its
//  member function implementation (code) in a separate C++ source
//  file named Queue.cpp.


template <class TYPE>
class Queue
{
    
//  First, consider header file Queue.h.  In this file declare the
//  following private member variables.
//
//  variable        type        description
//
//  max_len         int         maximum length of the queue array
//    
//  number          int         number of elements currently in the queue
//    
//  head            int         index of the head of the queue
//    
//  tail            int         index of the tail of the queue
//    
//  s               TYPE        array containing queue elements of generic
//                              type TYPE    
    
private:
    enum  { EMPTY = -1 };
    int   max_len;
    int   number;
    int   head;
    int   tail;
    TYPE* s;
    
//  The following public member functions for class Queue are declared in
//  Queue.h.
//
//  function        parameters          description
//
//  enqueue         const TYPE x        put x at the head of the queue.
//                                      enqueue has no return value.
//    
//  dequeue         none                take an item off the tail of the
//                                      queue.  dequeue has return type TYPE.
//    
//  isFull          none                determnes whether the queue is full.
//                                      isFull returns a bool value.
//    
//  isEmpty         none                determines whether the queue is empty.
//                                      isEmpty returns a bool value.
//    
//  getHead         none                get the item at the head of the queue.
//                                      getHead has return tye TYPE.
//    
//  getTail         none                get the item at the tail of the queue.
//                                      getTail has return tye TYPE.

  
public:
    Queue( const int size = 10 );
    
    ~Queue();
    
    TYPE DeQueue(); // pop
    
    void EnQueue(const TYPE x); // push
    
    bool isFull()  const; 
    
    bool isEmpty() const;
    
    TYPE getHead() const;
    
    TYPE getTail() const;
    
    void print() const;
    
};

//
//  The queue elements are stored in an array, similar to how elements
//  in a stack were stored in examples 11 and 12.  Template class Queue
//  will have one constructor declared in Queue.h that takes a single
//  parameter that MUST be given a default value of 10.  To get full
//  credit you MUST give the parameter a default value of 10.  Template
//  class Queue has one destructor.  To get full credit you MUST declare
//  a destructor in class Queue in Queue.h.

//



#endif	/* QUEUE_H */

