#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_char_h
#define stack_char_h

typedef struct stacknode {
	char data;
	struct stacknode *next;
} * stack;

void char_init_stack(stack *);
boolean char_is_full(void);
boolean char_is_empty(stack);
void char_push(stack *, char);
char char_pop(stack *);

#endif
