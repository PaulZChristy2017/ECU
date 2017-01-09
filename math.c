#include <stdio.h>
#include "complex.h"
#include "math.h"

/* Addition */
complex AddComplex(complex num1, complex num2) {
	complex ans;
	ans.real = num1.real + num2.real;
	ans.img  = num1.img + num2.img;
  
	return ans;  }

/* Subtraction */     
complex SubtractComplex(complex num1, complex num2) {  
	complex ans;    
	ans.real = num1.real - num2.real;
	ans.img  = num1.img - num2.img;
	return ans;  }

/* Multiplication */        
complex MultiplyComplex(complex num1, complex num2) {
	complex ans;  
	ans.real = num1.real * num2.real - num1.img * num2.img;
	ans.img  = num1.real * num2.img + num2.real * num1.img;
	return ans; }

/* Division */
void    DivideComplex(complex num1, complex num2) {
	complex numer, denom, ans;
        while ((num2.real == 0) && (num2.img == 0)) {
           printf("Error!! DIVISION BY ZERO\n");
           break; }
	denom = MultiplyComplex(num2, ConjugateComplex(num2));
	numer = MultiplyComplex(num1, ConjugateComplex(num2));
    float ansreal, ansimg;
	ansreal = (float)numer.real/denom.real;
	ansimg  = (float)numer.img/denom.real;
        if (ansimg > 0) {
	    	printf("%f + %fi\n", ansreal, ansimg); }
        else {
            printf("%f - %fi\n", ansreal, ansimg);  }
}

/* Conjugate */ 
complex ConjugateComplex(complex num1)  {
	complex ans;
	ans.real = num1.real;
	ans.img = -num1.img;
	return ans; }


/* Negate */
complex NegateComplex(complex num1) {
	complex ans;
	ans.real = -1 * num1.real;
	ans.img =  -1 * num1.img; 	
	return ans;  }
