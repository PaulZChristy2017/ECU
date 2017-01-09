#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "binary.h"

/*
   Author:  Paul Christy
   Course:  Computer Programming 2
   Program: binary_trees Menu
*/

int menu(void);

int main(void) {

	boolean quit = FALSE;

	int data_to_add, data_item, selection, delete_num;

	binary_tree root;

    	selection = menu();

	init_tree(&root);

    	while (selection != 5) {

       		switch (selection) {

			/* Add to the Tree */
           
           		case 1: if (!is_full()) {

					printf("What object do you to add to the tree?    ");

					scanf("%d", &data_to_add);
					
					printf("\n");
				
					printf("%d has been added to the binary_tree.\n",data_to_add);

					add_tree(&root, data_to_add);
					
				}

				else 

					printf("Error! binary_tree is full.\n");

				break;

			/* Delete From to the Tree */  
         
          		case 2: if (is_empty(root))

					printf("Error! Can't Delete from the tree. The Tree is empty.\n");

				else {

					printf("What object do you to delete from the tree?    ");

					scanf("%d", &delete_num);

					delete_branch(&root, delete_num); 

				}
				
                   		break;

			/* Print RNL (Right Node Left) */    
    
           		case 3: if (is_empty(root))

					printf("Error! Can't Print the right side of the tree. The Tree is empty.\n");

				else {

					
					print_RNL(root);

				}

				break;

			/* Print LNR (Left Node Right) */    
    
           		case 4: if (is_empty(root))

					printf("Error! Can't Print the left side of the tree. The Tree is empty.\n");

				else {

					
					print_LNR(root);

				}

				break;

          default: printf("%d is not a valid selection\n", selection);

		}

        selection = menu();

      	}

      printf("Bye! The Last Assignment of the Year\n");

}


int menu(void) {

        int choice;

	printf("\n");

        printf("1 Add\n");

        printf("2 Delete\n");

        printf("3 Print RNL (Right Node Left)\n");

        printf("4 Print LNR (Left Node Right)\n");

        printf("5 Quit\n");

        printf("Enter a selection:  ");

        scanf("%d", &choice);

	printf("\n");

	return choice;

}
