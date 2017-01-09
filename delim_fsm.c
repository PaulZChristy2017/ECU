#include <stdio.h>
#include "delim_fsm.h"
#include "delim_sub.h"
#include "boolean.h"

boolean fsm(char input_string[100]) {

int state, i;

state = 0;

i = -1;

char open, closed, delim_open, delim_closed;

/* Initilyie Stack */
void init_stack(stack *s) {

	(*s) = NULL;

}

while (TRUE) {

	switch (state) {

		/* Finite State Machine*/
		case 0:  i++;

               /* Send to State 1 */
               if (is_open(input_string[i])) 

                  state = 1; 

               /* Send to State 2 */
			      else if (is_closed(input_string[i])) 

                  state = 2; 

               /* Send to State 3 */
			      else if (input_string[i] == '\0') 

                  state = 3; 

               /* Send to State 4 */
			      else 
           
                  state = 4; 

               printf("Found %c, Going to State %d\n", input_string[i], state);

			      break;


		/* Push String */
		case 1:  push(&mystack, input_string[i]);

               state = 0;

               break;

		/* Pop String */
      case 2:	if (!is_empty(mystack)) {

                  open = pop(&mystack);

                  closed = input_string[i];

                  /* Check Is Brother */
                  if (!is_brother(open, closed)) {

                     printf("The brackets Don't Match! (State 2)\n");

                     return FALSE;

                  }
                }
 
               else {

                     printf("Error! There are too many closed brackets. (State 2)\n");

                     return FALSE;

                  }

               state = 0;

			      break;


		/* Print String */
		case 3:	if (is_empty(mystack)) {

                  printf("The stack is empty. (State 3)\n");

                  return TRUE;

               }

               else {
                  
                  printf("Error! There are too many open brackets. (State 3)\n");

                  return FALSE; 

               }
         
               break;

		/* Other Stuff on the String */
		case 4:	state = 0;

			      break; 

   }



}

}



/* Is Open */
boolean is_open(char delim_open) {

	return ((delim_open == '(' ) || (delim_open == '{' ) || (delim_open == '['));

}

/* Is Closed */
boolean is_closed(char delim_closed) {

	return ((delim_closed == ')' ) || (delim_closed == '}' ) || (delim_closed == ']'));

}

/* Is Brother */
boolean is_brother(char open, char closed) {

   return (((open == '(' ) && (closed == ')' )) || ((open == '{' ) && (closed == '}')) || ((open == '[' ) || (closed == ']')));

}
