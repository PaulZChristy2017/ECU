//================================================================
//Author.........: Vanessa Holland
//Coutse.........: Data Structures
//Program Summary: Bubble Sort for Sorter Assignment
//Input..........: stdin
//Output.........: stdout
//================================================================

#include "bubble.h" 
#include "swap.h"

void bubble(int array[], int num) {
  int i, j;
    //this for loop starts at the first value in the array and increments after 
    //each pass of the sorter. 
    for (i=0; i < num-1; i++) 
      //this for loop starts at the last position of array and moves toward 
      //the beginning, stopping when i is greater than j
      for (j = num-1; i < j; j--)
         //this if statement checks the value of j and the number right before j 
         // to see if they are in the correct position
         if (array[j-1] > array[j]) 
           //the swap subprogram when it finds a value that is in 
           //the wrong position
           swap(&array[j-1], &array[j]);
          
}

