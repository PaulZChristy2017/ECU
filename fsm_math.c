#include <stdio.h>
#include "fsm_math.h"
#include "stack_float.h"
#include "boolean.h"

boolean rpneval(char myinput[100]) {

int state, i, j;
state = 0;
j = 0;
i = -1;

/* Initilyie Stack */
void init_stack(stack *s) {

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
   case 1:  if (!is_empty(mystack) || (mystack -> next != NULL)) {
               num2 = pop(&mystack);
               if (!is_empty(mystack)) {            
                  num1 = pop(&mystack);
               }
               else {        
                  printf("Too few or too many operators or numbers on the Stack. Exiting Program.\n");     
                  exit(0);
               }
                  /* Addition */
                  if (myinput[i] == '+') {
                    ans = num1 + num2;
                    push(&mystack, ans);                       
                  }
                  /* Subtraction */
                  else if (myinput[i] == '-') {
                     ans = num1 - num2;
                     push(&mystack, ans);
                  }
                  /* Multiplication */
                  else if (myinput[i] == '*') {
                     ans = num1 * num2;
                     push(&mystack, ans);
                  }
                  /* Division */
                  else {
                     ans = num1 / num2;
                     if (num2 == 0) {
                        printf("Error! Can't Divide by Zero.\n");
                        exit(0);
                     }
                    push(&mystack, ans);
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
            push(&mystack, num1);
            j = 0;
            i = i - 1;
            state = 0;
            break;

   /* State 4: Found Space */
   case 4:  state = 0;
            break;

   /* State 5: Found End of Input String */
   case 5:  if (!is_empty(mystack)) {
                pop(&mystack);              
                if (!is_empty(mystack)) {
                    printf("Error! Leftovers on the Stack. Exiting Program.\n");
                    exit(0);
                }
            }
            else {
                printf("Error! There is no input on the string. Exiting Program.\n");
                exit(0);
            }
            return ans;
            break;

   /* State 6: Found Garbage */
   case 6:  printf("Error! Garbage Found on String exiting string.\n");
            exit(0);
            break;
   }
}
}

/* Is Digit */
boolean is_digit(char digit) {

	return ((digit == '0') || (digit == '1') || (digit == '2') || (digit == '3') || (digit == '4') || (digit == '5')
          || (digit == '6') || (digit == '7') || (digit == '8') || (digit == '9') || (digit == '.'));

}

/* Is Operator */
boolean is_op(char op) {

	return (op == '+') || (op == '-') || (op == '*') || (op == '/');

}

/* Is Space */
boolean is_space(char space) {

	return (space == ' ');

}
