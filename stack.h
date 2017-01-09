#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_h
#define stack_h

typedef struct stacknode {
	int data;
	struct stacknode *next;
} * stack;

void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack);
void push(stack *, int);
int pop(stack *);

#endif
