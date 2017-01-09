#include <stdlib.h>
#include "boolean.h"
#ifndef  delim_sub_h
#define delim_sub_h

typedef struct stacknode {
	char data;
	struct stacknode *next;
} * stack;


stack mystack;

void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack);
void push(stack *, char);
char pop(stack *);

#endif
