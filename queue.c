#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "queue.h"

/* Initilyze the Queue */
void init_queue(queue *q) {

	(*q) = (queue) malloc (sizeof(struct endpointer));

	(*q) -> front = NULL;

	(*q) -> back = NULL;

}


/* Check to see if Queue is Full */
boolean is_full(void) {

	queue temp;

	temp = (queue) malloc (sizeof(struct queuenode));

	if (temp == NULL)

		return TRUE;

	else {

		free (temp);


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
void add(queue *q, int x) {

	node_pointer temp;

	temp = (node_pointer)malloc(sizeof(struct queuenode));

	temp -> data = x;

	temp -> next = NULL;

	if ((*q) -> front == NULL) {

		(*q) -> front = temp;

		(*q) -> back = temp;

	}

	else {		
	
		(*q) -> back -> next = temp;

		(*q) -> back = temp;

	}

}

/* Fetch the Queue */
int fetch(queue *q) {

	node_pointer temp;

	int data_fetched;

	temp = (*q) -> front;

	data_fetched = temp -> data;
		
	if ((*q) -> front == (*q) -> back) {

		(*q) -> front = NULL;

		(*q) -> back = NULL;

	}

	else

		(*q) -> front = (*q) -> front -> next;

	free(temp);

	return data_fetched;

}

/* List the Queue */
void print_queue(queue q) {

	node_pointer temp;

	temp = q -> front;

	while (temp != NULL) {

		printf("%d\n", temp -> data);

		temp = temp -> next;

	}
}
