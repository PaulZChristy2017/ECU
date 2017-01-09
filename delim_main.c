#include <stdio.h>
#include "delim_fsm.h"

/*
   Author:  Paul Christy
   Course:  Data Structures
	Program: Delimiter Checker
   Summary: This program is a delimiter checker. It checks to see if all of your
            brackets match up in the string that you entered.
	Input:	stdin
	Output:	stdout
*/

int main() {

   printf("Please enter a string:     \n");

   gets(input_string);

	if (fsm(input_string)) {

		printf("All the Delimiters Matched. (Main Program)\n");

	}

}
