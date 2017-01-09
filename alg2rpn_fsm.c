#include <stdio.h>
#include "alg2rpn_fsm.h"
#include "stack_char.h" 
#include "boolean.h"
#include <string.h>
#include "prototypes.h"

boolean alg2rpn(char myinput[100]) {

state = 0;
left_par = '(';
j = 0;
i = -1;

/* Initilyie Stack */
void cinit_stack(cstack *s) {

	(*s) = NULL;

}

/* FSM: Alg 2 RPN Evaluater */
while (TRUE) {

   switch (state) {

   /* Starting State */
   case 0:  i++;

            /* Found Digit: Send to State 1 */
            if (is_digit(myinput[i])) {

               state = 1;
            }
            /* Found Operator: Send to State 2 */
            else if (is_op(myinput[i])) {

               state = 2;
            }
            /* Found Left Parenthesis: Send to State 3 */
            else if (is_open(myinput[i])) {

               state = 3;
            }
            /* Found Right Parenthesis: Send to State 4 */
            else if (is_closed(myinput[i])) {

               state = 4;
            }
            
			/* Found Space: Going to State 5 */
            else if (is_space(myinput[i])) {

               state = 5;
            }
			/* Found End of String: Send to State 6 */
            else if (myinput[i] == '\0') {

               state = 6;
            }
            /* Found Garbage: Send to State 7 */
            else {

               state = 7;
            }
            break;

   /* State 1: Found Digit */
   case 1:  while (is_digit(myinput[i])) {
				output_string[j] = myinput[i];
            	i++; /* Increment myinput */
            	j++; /* Increment output string */
			}
			output_string[j] = ' ';
			j++;
			i--;
			state = 0;
            break; 

   /* State 2: Found Operator */
   case 2:  while (!cis_empty(cmystack) && (is_prec(myinput[i]) <= is_prec(cmystack -> data)) && (cmystack -> data != '(')) {
                output_string[j] = cpop(&cmystack);
                j++; /* Increment output string */
                output_string[j] = myinput[i];
            }
			while (!cis_empty(cmystack) && (is_prec(myinput[i]) == is_prec(cmystack -> data)) && (cmystack -> data != '(')) {
                output_string[j] = cpop(&cmystack);
                j++; /* Increment output string */
                output_string[j] = myinput[i];
            }
            cpush(&cmystack, myinput[i]);
            state = 0;
            break;

   /* State 3: Found Left Parenthesis */
   case 3:  cpush(&cmystack, myinput[i]);
            state = 0;
            break;

   /* State 4: Found Right Parenthesis */
   case 4:  while (cmystack -> data != '(')  {
				if (!cis_empty(cmystack)) {
                	output_string[j] = cpop(&cmystack);
                	j++; /* Increment output string */
                	output_string[j] = ' ';
				}
            }
            if (!cis_empty(cmystack) && ((is_closed(cmystack -> data)) || (is_closed(myinput[i])))) {
                cpop(&cmystack);
            }
            state = 0;
            break;

   /* State 5: Found Space */
   case 5:  output_string[j] = ' ';
            state = 0;
            break;

    /* State 6: Found End of Input String */
   case 6: 	while (!cis_empty(cmystack)) {
                if (cmystack -> data == '(' ) {
                    printf("Error! Parenthesis on stack are mismatched. Exiting Program (Alg State 6).\n");
                    exit(0);
                }
                while (!cis_empty(cmystack) && (cmystack -> data != '(' ))  {
                    output_string[j] = cpop(&cmystack);
                    j++; /* Increment output string */	
                }
            }
            ans = rpneval(output_string);
            return ans;
            break;

   /* State 7: Found Garbage */
   case 7:  printf("Error! Garbage Found on String exiting program.\n");
            exit(0);
            break;

   }
}
}
