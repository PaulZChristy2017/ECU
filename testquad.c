#include <stdio.h>
#include <math.h>

/* 
   Author: Paul Christy
   Course: Computer Programming 2
   Program Summary: This program solves Quadratic Formulas.
   Input:  stdin
   Output: stdout
*/


float x, x_real, x_img, x1, x2; 
void solve_linear (int, int);
void solve_quad (int, int, int);
void solve_real (int, int, int);
void solve_complex (int, int, int);


int main(int argc, char *argv[])  {
    int a, b, c;


    sscanf(argv[1], "%d",& a);
    sscanf(argv[2], "%d",& b);
    sscanf(argv[3], "%d",& c);

 
    while (argc != 4)  {
          printf("Error! Program must run on the command line.\n");
          printf("Error! Program must have an argument count of 4.\n");
          break;  }


    if (a == 0)   {
       if (b == 0) 
          printf("C equals %d.\n", c);  }   
    else { 
          void solve_linear (int b, int c) {
               float x;
               x = -c/b;
               printf("x = %f\n", x);      }    
         }
    if (a != 0)   {
       if (((b * b) - (4 * a * c)) < 0) {
          solve_complex (a, b, c);      }
       else
          solve_real (a, b, c); }
}


void solve_linear (int b, int c) {
     x = -c/b;
     printf("x = %f\n", x);      } 

 
void solve_quad (int a, int b, int c) {
     if ((b * b) - 4 * a * c < 0) 
        solve_complex (a, b, c); 
     else
        solve_real (a, b, c); }


void solve_real (int a, int b, int c)   { 
     x1 = (-b + sqrt((b * b) - (4 * a * c)))/(2 * a);
     x2 = (-b - sqrt((b * b) - (4 * a * c)))/(2 * a);
     printf("x = %f\n",& x1);
     printf("x = %f\n",& x2);           }


void solve_complex (int a, int b, int c)     {
     x_real = -b/(2 * a);
     x_img = (sqrt(abs((b * b) - (4 * a * c))))/(2 * a);
     printf("%f +- %fi\n",& x_real, x_img);   }
