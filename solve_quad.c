#include <stdio.h>
#include <math.h>

void solve_quad (int a, int b, int c)  {
     if (((b * b) - (4 * a * c)) < 0) {
        solve_complex (a, b, c);      }
     else
        solve_real (a, b, c);          }
