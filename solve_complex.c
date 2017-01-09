#include <stdio.h>
#include <math.h>

void solve_complex (int a, int b, int c)           {
     float x_real, x_img;
     x_real = (float)-b/(2 * a);
     x_img = ((sqrt(abs((b * b) - (4 * a * c))))/(2 * a));
     printf("%.3f +- %.3fi\n", x_real, x_img);  }
