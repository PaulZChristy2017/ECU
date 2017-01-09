#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_char_h
#define stack_char_h

typedef struct cstacknode {
	char data;
	struct cstacknode *next;
} * cstack;

cstack cmystack;

void cinit_stack(cstack *);
boolean cis_full(void);
boolean cis_empty(cstack);
void cpush(cstack *, char);
char cpop(cstack *);

#endif
