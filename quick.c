/*
Author: Jacob Hix and Ramon Ruiz
Course: Data Structures
Program Summary: Program will sort an array of numbers into numerical order as per the standards of the quicksorter.
Input: stdin
Output: stdout
*/

#include <stdio.h>
#include <stdlib.h>
#include "swap.h"
#include "quick.h"

/*=========================================================
The quicksort program can be divided into 3 main segments:
The selection of the pivot, the swapping of the numbers,
and the recursion that repeats ad infinitum until the array
is completely sorted.
=========================================================*/

void quick(int array[], int first, int size) {
   int left, right, pivot; //Overly-lengthy variable declarations.

/*=========================================================
Just below is the first part of the program. It seems to be
most efficient (if more difficult to implement) to always
pick the middle element of the array as the pivot point,
so that's what's been done here. By taking the sum of the
first element (not always array[0]) and the last element
used (not always the last element of the array) and dividing
it by 2, a reliable method of determining the pivot is made.
There are also left and right pointers used to keep track of
where the program is in the array for the swapping section.
=========================================================*/

   pivot = array[(first + size) / 2];
   left = first;
   right = size;

/*=========================================================
What follows is the second part of the program. Since the
whole idea of the quicksort is that the pivot is where it's
supposed to be in the array by the end of every pass, the
below code is designed to place every number smaller than or
equal to the pivot on the left side of it, and every number
greater than the pivot on the right.
=========================================================*/

   while (left <= right) {
      while (array[left] < pivot)
         left++;
      while (array[right] > pivot)
         right--;
      if (left <= right) {
         swap(&array[left], &array[right]);
         left++;
         right--;
      }
   }

/*=========================================================
This is the final part of the program. Since the chances of
the array being sorted after a single run is very slim, we
need to use recursion to send the program different parts
of the array to repeat the process.  You can call them
sub-arrays if you so desire.
=========================================================*/

   if (first < right)
      quick(array, first, right);
   if (left < size)
      quick(array, left, size);
}
