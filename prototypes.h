#include <stdlib.h>
#include "boolean.h"
#ifndef  prototypes_h
#define prototypes_h

char myinput[100], output_string[50];

float ans, num1;

boolean is_digit(char);
boolean is_op(char);
boolean is_space(char);
boolean is_open(char);
boolean is_closed(char);
boolean is_prec(char);

#endif
