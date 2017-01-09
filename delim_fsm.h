#include <stdlib.h>
#include "boolean.h"
#ifndef  delim_fsm_h
#define delim_fsm_h

char input_string[100];

boolean is_open(char);
boolean is_closed(char);
boolean is_brother(char, char);

#endif
