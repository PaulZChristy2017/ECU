#include <stdio.h>
#include "fsm_math.h"

/*
    Author:  Paul Christy
    Course:  Data Structures
	Program: RPN Evaluater 
    Summary: Program takes an expression like 1 + 2 and converts it into Reverse
             Polish Notation 1 2 + and solves the problem.
	Input:	 stdin
	Output:	 stdout
*/

float main(void) {

    printf("Please enter a rpn statement:    \n");

    gets(myinput);

    ans = rpneval(myinput);

    rpneval(myinput); {

        printf("The answer is %.2f\n", ans); 

   }

}
