#include <stdio.h>

int main(void) {

   char string[100];

   printf("Enter a string : ");

   gets(string );

   printf("You entered: %s\n", string);

   return(0);

}
