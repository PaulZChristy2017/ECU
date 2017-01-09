#include <stdio.h>
#include "complex.h"
#include "arithmitic.h"
#include "input_complex.h"


complex ReadComplex(void) {
        complex num;

        printf("Enter real part:\n  ");
        scanf("%d",& num.real);

        printf("Enter imaginary part:\n  ");
        scanf("%d",& num.img);
        return num;      }


void WriteComplex(complex ans) {

	if (ans.img > 0) 
           printf("%d + %di\n", ans.real, ans.img); 

	else {
	   printf("%d - %di\n", ans.real, ans.img); 
}
}
