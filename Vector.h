/* 
 * File:   Vector.h
 * Author: Paul Christy
 * Class: Object Oriented Programming
 * Created on February 4, 2015, 3:17 PM
 */

#include <iostream>
#include <climits>

#ifndef VECTOR_H
#define	VECTOR_H

using namespace std;

const int max_len = 20;
int size;

class Vector 
{
    private:  
        double v[max_len];      
        int length;  
           
    public:      
        Vector() { size = 0; }
        
        int getSize() const { return size; }
        
        Vector(const int length, const double Vector[]) 
        {
            if( 0 <= length && length <= max_len ) {
                size = length;
                for( int i = 0; i < size; ++i ) v[i] = Vector[i];
            } 
            
            else 
            {
                size = 0;
                cout << endl;
                cerr << length << " is an invalid length." << endl;
                cerr << "The length of the vector will be set to zero." << endl;
            }
        }
        
        void print() const {
            for( int i = 0; i < size; ++i ) cout << v[i] << " ";
            cout << endl;
        }
        
        void print(const int n) const 
        {
            int m = min(n, length);
            for( int i = 0; i < m; ++i ) cout << v[m - 1] << " ";
            cout << endl;
        }

       const double* getVector() const { return v; }
       
       void setVector(const int length, const double Vector[]) 
       {
           if( length < 0 )
           { 
                cout << endl;
                cout << "The Vector size " << length << " is too small." << endl;
                cout << "The Vector will be set to the empty Vector." << endl;
                cout << endl;
                size = 0;
                
           }
           else if( length > max_len ) 
           {
                cout << endl;
                cout << "The Vector size " << length << " is too large." << endl;
                cout << "Only the first " << max_len << " values will be used." << endl;
                cout << endl;
                size = max_len;
           } 
           else
               size = length;
           for( int i = 0; i < size; ++i ) v[i] = Vector[i];
        }
       
};

Vector operator+(const Vector a, const Vector b)
{
    int sizea = a.getSize();
    int sizeb = b.getSize();
    int size = min(sizea,sizeb);
    double c[max_len];
    // The cast (int*) is necessary in
    // the two following statements.    
    double* pa = (double*)a.getVector();
    double* pb = (double*)b.getVector();
    
    for( int i = 0; i < size; ++i )
    {
        c[i] = pa[i] + pb[i];
    }
    cout << endl;
    
    Vector temp; 
    temp.setVector(size, c);
    return temp;
}

Vector operator-(const Vector a, const Vector b)
{
    int sizea = a.getSize();
    int sizeb = b.getSize();
    int size = min(sizea,sizeb);
    double c[max_len];
    // The cast (int*) is necessary in
    // the two following statements.
    double* pa = (double*)a.getVector();
    double* pb = (double*)b.getVector();
    
    for( int i = 0; i < size; ++i)
        c[i] = pa[i] - pb[i];

    Vector temp;    
    temp.setVector(size, c);
    return temp;
}

#endif	/* VECTOR_H */

