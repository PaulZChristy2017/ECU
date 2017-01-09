#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_char_h
#define stack_char_h

typedef struct stacknode {
	char data;
	struct stacknode *next;
} * stack;

void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack);
void push(stack *, char);
char pop(stack *);

#endif
