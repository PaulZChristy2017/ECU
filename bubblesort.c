#include <stdio.h>

#define MAX 10000

/* 
   Author: Paul Christy
   Course: Computer Programming - Section 0
   Program Summary: Sort Random Numbers in Descending Order.
   Input:  stdi
   Output: stdo
*/

/* Prototype */

int  num, randu();

void bubble(int*, int);

void swap(int*,int*);

/* Main Program */

int main (int argc, char *argv[]) {

    int x[MAX], i, num;

/* Argument Count */

    if (argc == 2) 

/* Command Line */

       sscanf(argv[1], "%d", & num);

/* Enter Number Sorter Values */

    else  printf("How many numbers do wish to sort? ", num);

          scanf("%d", &num);

    while ((num < 2) || (num > 10000)) {

          printf("Error! Number has to greater than two or less than or equal to 10,000\n");

          printf("How many numbers do wish to sort?\n", num);

          scanf("%d", &num);
}
/* Call */

    for  (i = 0; i < num; i++)

          x[i]=randu(); 

          bubble (x, num);

    printf("Here are your %d random numbers\n", num);

    for  (i = 0; i < num; i++)

          printf("%d ",x[i]);

printf("\n");

}

/* Subprogram Start */

/* Random Number Generator */

int randu(){

    static int seed = 17;

    seed = (25179*seed+13849)%65536;

    return seed;
}
/* Bubble Sort Code */

/* Increasing Order: if (a[j-1] > a[j]) */

/* Decreasing Order: if (a[j-1] < a[j]) */

void bubble(int a[], int n) {

    int i,j;

     for (i = 0; i < n-1; i++)

      for (j = n-1; i < j; j--)

       if (a[j-1] < a[j])

        swap (&a[j-1], & a [j]);

}

/* Swap Number Code */

void swap(int *a, int *b) {

     int temp;

     temp = *a;

     *a = *b;

     *b = temp;
}
