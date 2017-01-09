#include <stdlib.h>
#include "boolean.h"
#include "alg2rpn_fsm.h"
#include "stack_char.h"

/* Is Digit */
boolean is_digit(char digit) {

	return ((digit == '0') || (digit == '1') || (digit == '2') || (digit == '3') || (digit == '4') || (digit == '5')
           || (digit == '6') || (digit == '7') || (digit == '8') || (digit == '9') || (digit == '.'));

}

/* Is Operator */
boolean is_op(char op) {

	return (op == '+') || (op == '-') || (op == '*') || (op == '/');

}

/* Is Space */
boolean is_space(char space) {

	return (space == ' ');

}

/* Precedence */
boolean is_prec(char op) {

    char prec;

    prec = op;

    switch(op) {

        case '+':   return 1;
                    break;

        case '-':   return 1;
                    break;

        case '*':   return 2;
                    break;

        case '/':   return 2;
                    break;

    }
}

/* Is Open */
boolean is_open(char delim_open) {

	return (delim_open == '(' );

}

/* Is Closed */
boolean is_closed(char delim_closed) {

	return (delim_closed == ')' );

}
