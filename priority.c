#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "priority.h"

/* Initilyze the Queue */

void init_queue(queue *q) {

	(*q) = (queue) malloc (sizeof(struct endpointer));

	(*q) -> front = NULL;

	(*q) -> back = NULL;

}


/* Check to see if Queue is Full */

boolean is_full(void) {

	queue new_node;

	new_node = (queue) malloc (sizeof(struct queuenode));

	if (new_node == NULL)

		return TRUE;

	else {

		free (new_node);


		return FALSE;

	}

}


/* Check to see if Queue is Empty */

boolean is_empty(queue q) {

	if (((q) -> front == NULL) && ((q) -> back == NULL))

		return TRUE;

	else

		return FALSE;

}

/* Add to the Queue */

void add(queue *q, int x, int z) {

	node_pointer new_node, temp;

	new_node = (node_pointer)malloc(sizeof(struct queuenode));

	temp = (node_pointer)malloc(sizeof(struct queuenode));

	new_node -> data = x;

	new_node -> pri = z;

	new_node -> next = NULL;

	/* Adding to an Empty Queue */

	if (is_empty(*q)) {

		(*q) -> front = new_node;

		(*q) -> back = new_node;

	}

	/* Adding to the Back of the Queue */

	else if ((new_node -> pri) <= ((*q) -> back -> pri)) {

		(*q) -> back -> next = new_node;

		(*q) -> back = new_node;

	}

	/* Adding to the Front of the Queue */

	else if ((new_node -> pri) > ((*q) -> front -> pri)) {

		new_node -> next = (*q) -> front;

		(*q) -> front = new_node;

	}

	/* Adding to the Middle of the Queue */

	else {
	
		temp = (*q) -> front;

		while ((new_node -> pri) <= (temp -> next -> pri)) {

			temp = temp -> next;

		}

		new_node -> next = temp -> next;

		temp -> next = new_node;

	}

}

/* Fetch the Queue */

int fetch(queue *q) {

	node_pointer new_node;

	int data_fetched;

	new_node = (*q) -> front;

	data_fetched = new_node -> data;
		
	if ((*q) -> front == (*q) -> back) {

		(*q) -> front = NULL;

		(*q) -> back = NULL;

	}

	else

		(*q) -> front = (*q) -> front -> next;

	free(new_node);

	return data_fetched;

}

/* List the Queue */

void print_queue(queue q) {

	node_pointer new_node;

	new_node = q -> front;

	while (new_node != NULL) {

		printf("data: %d priority: %d\n", new_node -> data, new_node -> pri);

		new_node = new_node -> next;

	}
}
