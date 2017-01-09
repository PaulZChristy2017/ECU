#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack_float.h"

/* Initilyze Stack */
void finit_stack(fstack *s) {
	(*s) = NULL;
}

/* Full Stack */
boolean fis_full(void) {
	fstack ftemp;
	ftemp = (fstack) malloc (sizeof(struct fstacknode));
	if (ftemp == NULL)
		return TRUE;
	else {
		free (ftemp);
		return FALSE;
	}
}

/* Empty Stack */
boolean fis_empty(fstack s) {
	return (s == NULL);
}

/* Push Stack */
void fpush(fstack *s, float x) {
	fstack ftemp;
	ftemp = (fstack)malloc(sizeof(struct fstacknode));
	ftemp -> data = x;
	ftemp -> next = (*s);
	(*s) = ftemp;
}

/* Pop Stack */
float fpop(fstack *s) {
	fstack ftemp;
	float data_popped;
	ftemp = (*s);
	data_popped = ftemp -> data;
	(*s) = ftemp -> next;
	free(ftemp);
	return data_popped;
}

/* Print Stack */
void print_stack(fstack s) {
	if (!fis_empty(s)) {
		printf("%f\n", s->data);
		print_stack(s->next);
	}
}
