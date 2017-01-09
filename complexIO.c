#include <stdio.h>
#include "complex.h"
#include "complexIO.h"



complex ReadComplex(void) {
        complex num;

        printf("Enter real part:  ");
        scanf("%d" , &num.real);


        printf("Enter imaginary part:  ");
        scanf("%d" , &num.img);
        printf("\n");
        return num;      }


void WriteComplex(complex ans) {

	if (ans.img > 0) {
           printf("%d + %di\n", ans.real, ans.img); 
           printf("\n"); 
	}

	else {
	   printf("%d - %di\n", ans.real, -1 * ans.img); 
           printf("\n");
	}
}
