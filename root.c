#include <stdio.h>
#include <math.h>

/* 
   Author: Paul Christy
   Course: Computer Programming 2
   Program Summary: This program is a Square Root table.
   Input:  stdin
   Output: stdout
*/
int main(int argc, char *argv[]) {
    int   start, stop, step, row;
    float col;
    sscanf(argv[1], "%d",& start);
    sscanf(argv[2], "%d",& stop);
    sscanf(argv[3], "%d",& step);
/* Argument Count 1 */
if (argc == 1) { 
/* start, stop, and step value */
    printf("What number do you want the table to start at?\n");
    scanf("%d",& start);
    printf("What number do you want the table to stop at?\n");
    scanf("%d",& stop);
    printf("What number do you want the table to step at?\n");
    scanf("%d",& step); }
/* Argument Count 2 and Argument Count 3 */ 
 if (argc == 2) {
       printf("Error! Command line argument has to have 0 or 3 numbers.\n"); } 
 if (argc == 3) {
       printf("Error! Command line argument has to have 0 or 3 numbers.\n"); }      
/* Square Root Table-Increasing value */
/* table for loop */
          for (row = start; row <= stop; row = row + step) {         
              if (row < 0) {
                 printf(" %4d  %4.3fi\n", row, sqrt(abs(row))); }     
              else
                 printf(" %4d  %4.3f\n", row, sqrt(abs(row))); }
              printf("\n"); 
}
