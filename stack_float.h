#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_float_h
#define stack_float_h

typedef struct stacknode {
	float data;
	struct stacknode *next;
} * stack;

stack mystack;

void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack);
void push(stack *, float);
float pop(stack *);

#endif
