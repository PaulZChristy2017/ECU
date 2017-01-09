#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "boolean.h"
#include "queue.h"

/*
   Author:  Paul Christy
   Course:  Computer Programming 2
   Program: Queue Assignment
*/

int menu(void);

int main(void) {

	boolean quit = FALSE;

	int num, add_value, data_item, selection, data_fetched;

	queue q;

    	selection = menu();

	init_queue(&q);

    	while (selection != 4) {

       		switch (selection) {

			/* Add to the Queue */
           
           		case 1: if (!is_full()) {

					printf("What object do you to add?    ");

					scanf("%d", &add_value);
					
					printf("\n");
				
					printf("%d has been added to the queue.\n",add_value);

					add(&q, add_value);

				}

				else 

					printf("The Queue is full.\n");

				break;

			/* Fetch the Queue */  
         
          		case 2: if (is_empty(q))

					printf("Error! The queue is empty.\n");

				else {

					data_fetched = fetch(&q); 

					printf("%d has been destroyed.\n", data_fetched);

				}
				
                   		break;

			/* List the Queue */    
    
           		case 3: if (is_empty(q))

					printf("Error! The queue is empty.\n");

				else {

					
					print_queue(q);

				}

				break;

          default: printf("%d is not a valid selection\n", selection);

        	}

        selection = menu();

      	}	

      printf("Bye!\n");
      sleep(3);
      printf("Kaboom!");
}


    int menu(void) {

        int choice;

	printf("\n");

        printf("1 Add to the Queue\n");

        printf("2 Fetch the Queue\n");

        printf("3 List the Queue\n");

        printf("4 Quit\n");

        printf("Enter a selection:  ");

        scanf("%d", &choice);

	printf("\n");

        return choice;
     }
