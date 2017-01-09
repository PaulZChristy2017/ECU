#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack_char.h"

/* Initilyze Stack */
void cinit_stack(cstack *s) {

	(*s) = NULL;

}

/* Full Stack */
boolean cis_full(void) {

	cstack ctemp;

	ctemp = (cstack) malloc (sizeof(struct cstacknode));

	if (ctemp == NULL)

		return TRUE;

	else {

		free (ctemp);

		return FALSE;

	}

}

/* Empty Stack */
boolean cis_empty(cstack s) {

	return (s == NULL);
}


/* Push Stack */
void cpush(cstack *s, char x) {

	cstack ctemp;

	ctemp = (cstack)malloc(sizeof(struct cstacknode));

	ctemp -> data = x;

	ctemp -> next = (*s);

	(*s) = ctemp;

}

/* Pop Stack */
char cpop(cstack *s) {

	cstack ctemp;

	char cdata_popped;

	ctemp = (*s);

	cdata_popped = ctemp -> data;

	(*s) = ctemp -> next;

	free(ctemp);

	return cdata_popped;

}

/* Print Stack */
void cprint_stack(cstack s) {

	if (!cis_empty(s)) {

		printf("%c\n", s->data);

		cprint_stack(s->next);

	}
}
