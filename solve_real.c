#include <stdio.h>
#include <math.h>

void solve_real (int a, int b, int c)   { 
     float x1, x2;
     x1 = (-b + (sqrt((b * b) - (4 * a * c))))/(2 * a);
     x2 = (-b - (sqrt((b * b) - (4 * a * c))))/(2 * a);
     printf("x =  %.3f or\n", x1);
     printf("x = %.3f\n", x2);           }
