#include "swap.h"

/* 
   This subprogram is provided by Ms. Tarver and is to be used to swap
   the contents of two memory locations using pass-by-reference.
*/

void swap (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
