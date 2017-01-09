#include <stdio.h>
#include "radix.h"
void radix_sort(int *a , int Arraysize){
  int i, b[Arraysize], Largestnum=a[0], placeholder = 1;

/*
This for loop is used to start the sorter by going through the array searching for the largest single digit number in the array
searching for the largest single digit number in the array and assigning that number as Largestnum 
*/
  for (i = 1; i < Arraysize; i++){ 
    if (a[i] > Largestnum)	   
      Largestnum = a[i];	   
  }
/*
This while loop will impliment the entire sorting program by taking the LargestNum we just found out and dividing it by the placeholder
*/
  while ((Largestnum / placeholder)>0) {    

/*
This sorter will need 10 different buckets in order for the arrays to go into, 0-9. This will create such an array of buckets and by using the '{}' we assign every one of them to 0
*/

    int bucket[10] = {0};	    

/*
This for loop is used to check each number in the array
The equation used here is a[i], which is the current number for the array we are given, divided by the placeholder
we then divide the product by 10 using the '%', symbol which is used to calculate remainders. This will give you the final answer
as a remainder where it will add the entire number it is checking into the designated bucket of 0-9 based off of the remainder
*/

    for (i = 0; i < Arraysize; i++)  
      bucket[(a[i] / placeholder) % 10]++;  

/*
This for loop is keeps track of how many numbers are in each bucket.
*/

    for (i = 1; i < 10; i++)       	      
      bucket[i] = bucket[i] + bucket[i-1];

/*
This for loop is used for the actual sorting portion of the program. It starts at the end of the array moving its way up to the front of the array sorting them from a[i] and putting them into b[i], which is just a temporary array. 
*/

    for (i=Arraysize-1;i>=0;i--) 	   
      b[--bucket[(a[i] / placeholder) % 10]]=a[i];  

/*
This for loop checks the entire array, for however large the array is, and will then put the numbers back into a[i] and then by using fflush(stdout) it buffers the entire program, flushing anything that is stuck, back into the array.
*/
    for (i = 0; i < Arraysize; i++){	     
      a[i] = b[i];			     
      fflush(stdout);

    }
/*
 The placeholder used throughout the entire program is used in order to understand where the 10, 100, 1000 and so on places are, the program will go throughout the entire array until it has hit the end, once it hits the end it will multiply the current placeholder by 10 which will then increment the value of the number
*/
    placeholder = placeholder * 10;   
  }
}
