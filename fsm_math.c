#include <stdio.h>
#include "fsm_math.h"
#include "stack_float.h"
#include "boolean.h"
#include "prototypes.h"

boolean rpneval(char myinput[100]) {
float ans;
int state, i, j;
state = 0;
j = 0;
i = -1;

/* Initilyie Stack */
void finit_stack(fstack *s) {

	(*s) = NULL;

}

/* FSM: RPN Evaluater */
while (TRUE) {
   switch (state) {
   /* Starting State */
   case 0:  i++;
            /* Found Operator: Send to State 1 */
            if (is_op(myinput[i])) 
               state = 1;
            /* Found Digit: Send to State 2 */
            else if (is_digit(myinput[i]))
               state = 2;
            /* Found Space: Send to State 4 */
            else if (is_space(myinput[i]))
               state = 4;
            /* Found End of Input String: Send to State 5 */
            else if (myinput[i] == '\0')
               state = 5;
            /* Found Garbage: Send to State 6 */
            else 
               state = 6;
            break;

   /* State 1: Found Operator */
   case 1:  if (!fis_empty(fmystack) || (fmystack -> next != NULL)) {
               num2 = fpop(&fmystack);
               if (!fis_empty(fmystack)) {            
                  num1 = fpop(&fmystack);
               }
               else {        
                  printf("Too few or too many operators or numbers on the Stack. Exiting Program.\n");     
                  exit(0);
               }
                  /* Addition */
                  if (myinput[i] == '+') {
                    ans = num1 + num2;
                    fpush(&fmystack, ans);                       
                  }
                  /* Subtraction */
                  else if (myinput[i] == '-') {
                     ans = num1 - num2;
                     fpush(&fmystack, ans);
                  }
                  /* Multiplication */
                  else if (myinput[i] == '*') {
                     ans = num1 * num2;
                     fpush(&fmystack, ans);
                  }
                  /* Division */
                  else {
                     ans = num1 / num2;
                     if (num2 == 0) {
                        printf("Error! Can't Divide by Zero.\n");
                        exit(0);
                     }
                    fpush(&fmystack, ans);
                }
               state = 0;
            }
            else {         
               printf("Stack is empty. Exiting Program.\n");     
               exit(0);
            }
            break; 

   /* State 2: Found Digit */
   case 2:  temp[j] = myinput[i];
            j++;
            i++;
            if (is_digit(myinput[i]))
               state = 2;
            else
               state = 3;
            break;

   /* State 3: Found End of Number */
   case 3:  temp[j] = '\0';
            sscanf(temp, "%f", &num1);
            fpush(&fmystack, num1);
            j = 0;
            i = i - 1;
            state = 0;
            break;

   /* State 4: Found Space */
   case 4:  state = 0;
            break;

   /* State 5: Found End of Input String */
   case 5:  if (!fis_empty(fmystack)) {
                fpop(&fmystack);              
                if (!fis_empty(fmystack)) {
                    printf("Error! Leftovers on the Stack. Exiting Program.\n");
                    exit(0);
                }
            }
            else {
                printf("Error! There is no input on the string. Exiting Program (RPN State 5).\n");
                exit(0);
            }
            return ans;
            break;

   /* State 6: Found Garbage */
   case 6:  printf("Error! Garbage Found on String exiting program.\n");
            printf("%s\n", output_string);
            exit(0);
            break;
   }
}
}
