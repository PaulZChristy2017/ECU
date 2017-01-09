#include <stdio.h>
#include <math.h>

/* 
   Author:     Paul Christy
   Course:     Computer Programming 2
   Assignment: Quadratic Fomula
*/


int main(int argc, char *argv[])  {
    int a, b, c;


    sscanf(argv[1], "%d",& a);
    sscanf(argv[2], "%d",& b);
    sscanf(argv[3], "%d",& c);

 
    while (argc != 4)  {
          printf("Error! Program must run on the command line.\n");
          printf("Error! Program must have an argument count of 4.\n");
          break;       }


    if (a == 0)              {
       if (b == 0)                      {
          printf("C equals %d.\n", c);  }   
    else  
       solve_linear (b, c);  }  


    if (a != 0)   {
       if (((b * b) - (4 * a * c)) < 0) {
          solve_complex (a, b, c);      }
       else
          solve_real (a, b, c); }
}
