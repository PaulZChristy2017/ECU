#include <stdlib.h>
#include "boolean.h"
#ifndef  stack_float_h
#define stack_float_h

typedef struct fstacknode {
	float data;
	struct fstacknode *next;
} * fstack;

fstack fmystack;

void finit_stack(fstack *);
boolean fis_full(void);
boolean fis_empty(fstack);
void fpush(fstack *, float);
float fpop(fstack *);

#endif
