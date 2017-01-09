#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "binary.h"

/* Initilyze binary_tree */

void init_tree(binary_tree *t) {

	(*t) = NULL;

}


/* Full Binary Tree */

boolean is_full(void) {

	binary_tree temp;

	temp = (binary_tree) malloc (sizeof(struct treenode));

	if (temp == NULL)

		return TRUE;

	else {

		free (temp);

		return FALSE;

	}

}


/* Empty Binary Tree */

boolean is_empty(binary_tree t) {

	if (t == NULL)

		return TRUE;

	else

		return FALSE;

}

/* Add to the Tree */

void add_tree(binary_tree *t, int x) {

	if (!is_full()) {

		/* Adding to an Empty Position on the Binary Tree */

		if ((*t) == NULL) {

			(*t) = (binary_tree)malloc(sizeof(struct treenode));

			(*t) -> data = x;

			(*t) -> left = NULL;

			(*t) -> right = NULL;

		}

		else {

			if (x <= (*t) -> data) {

				add_tree(&(*t) -> left, x); 

			}

			else {

				add_tree(&(*t) -> right, x); 

			}

		}

	}

	else 

		printf("The Tree is full. Please delete something if you wish to add something else.\n");

}

/* Delete from Binary Tree */

void delete_branch(binary_tree *t, int x) {

	binary_tree temp;

	int delete_num;

	delete_num = x;

	temp = (*t);

	/* If Tree is not Empty */
	
	if (!is_empty(*t)) {

		if ((*t) -> data == delete_num) {

			/* No Children */

			if (((*t) -> left == NULL) && ((*t) -> right == NULL)) {

				temp = (*t);	/* Set temp to (*t) */

				(*t) = NULL; 	/* Set (*t) to NULL */

				free(temp); 	/* free temp */

			}

			/* Left Child Only */

			else if (((*t) -> left != NULL) && ((*t) -> right == NULL)) {

				temp = (*t);		/* Set temp to (*t) */

				(*t) = (*t) -> left;	/* move (*t) to left child */

				free(temp); 		/* free temp */

			}

			/* Right Child Only */

			else if (((*t) -> left == NULL) && ((*t) -> right != NULL)) {

				temp = (*t);		/* Set temp to (*t) */

				(*t) = (*t) -> right;	/* move (*t) to right child */

				free(temp); 		/* free temp */

			}

			/* Two Children */

			else {

				temp = (*t) -> left;			/* set temp to (*t) -> right */

				while (temp -> right != NULL) {		/* while temp -> left != NULL */

					temp = temp -> right;			/* move temp back to (*t) */

				}					/* End of while loop */

				temp -> right = (*t) -> right;		/* set temp -> right to (*t) -> right */

				temp = (*t);				/* move temp back to (*t) */

				(*t) = (*t) -> left;			/* move (*t) to (*t) -> left */

				free(temp); 				/* free temp */

			}

		}

		/* If current node is not the data were looking for */

		else {

			if (delete_num <= (*t) -> data) {

				delete_branch(&(*t) -> left, delete_num); 

			}

			else {

				delete_branch(&(*t) -> right, delete_num); 

			}

		}

	}

	/* If Tree is Empty */

	else {

		printf("\n");

		printf("Error! Data is not in the Tree\n");

	}

}

/* Print RNL (Right Node Left): Descending Order */

void print_RNL(binary_tree t) {

	if (!is_empty(t)) {

		print_RNL(t -> right);

		printf("%d\n", t -> data);

		print_RNL(t -> left);

	}

}

/* Print LNR (Left Node Right): Ascending Order */

void print_LNR(binary_tree t) {

	if (!is_empty(t)) {

		print_LNR(t -> left);

		printf("%d\n", t -> data);

		print_LNR(t -> right);

	}
}
