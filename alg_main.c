#include <stdio.h>
#include "alg2rpn_fsm.h"
#include "prototypes.h"
#include "fsm_math.h"

/*
    Author:  Paul Christy
    Course:  Data Structures
    Program: Shunting Yard Algorithm to RPN Evaluater 
    Summary: 
	Input:	 stdin
	Output:	 stdout
*/

float main(void) {

    printf("Please enter a math equation:    \n");

    gets(myinput);

    ans = alg2rpn(myinput);

    alg2rpn(myinput); {

        printf("The answer is %.2f\n", ans); 

   }

}
