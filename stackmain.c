#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack.h"

/*
   Author:  Paul Christy
   Course:  Computer Programming 2
   Program: Stacks Menu
*/

int menu(void);

int main(void) {

	boolean quit = FALSE;

	int num, push_value, data_item, selection, data_popped;

	stack top;

	top -> data;

   selection = menu();

	init_stack(&top);

	boolean is_full(void);

	boolean is_empty(stack);

    	while (selection != 4) {

       		switch (selection) {

			/* Push */
           
           		case 1: if (is_full())

					printf("Error! Stack is full.\n");

				else {

					printf("What object do you to push?    ");

					scanf("%d", &push_value);
					
					printf("\n");
				
					printf("%d has been added to the stack.\n",push_value);

					push(&top, push_value);

				}

				break;

			/* Pop */  
         
          		case 2: if (is_empty(top))

					printf("Error! Stack is empty.\n");

				else {

					data_popped = pop(&top); 

					printf("%d has been destroyed.\n", data_popped);

				}
				
                   		break;

			/* Print */    
    
           		case 3: if (is_empty(top))

					printf("Error! Stack is empty.\n");

				else {

					
					print_stack(top);

				}

				break;

          default: printf("%d is not a valid selection\n", selection);
        }
        selection = menu();
      }
      printf("Bye!\n");
    }


    int menu(void) {
        int choice;
	printf("\n");
        printf("1 Push\n");
        printf("2 Pop\n");
        printf("3 Print\n");
        printf("4 Quit\n");
        printf("Enter a selection:  ");
        scanf("%d", &choice);
	printf("\n");
        return choice;
     }
