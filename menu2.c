#include <stdio.h>
#include "boolean.h"
#include "complex.h"
#include "math.h"
#include "complexIO.h"

/*
   Author:  Paul Christy
   Course:  Computer Programming 2
   Program: Complex Numbers
*/

int main(void)  {

char menu_sel [2];
complex num1, num2, ans;
boolean quit = FALSE;
boolean showmenu = TRUE;
    while (!quit)  {
          if (showmenu)  {
	     printf("\n");
             printf("+ Add\n");
             printf("- Subtract\n");
             printf("X Multiply\n");
             printf("/ Divide\n");
             printf("C Conjugate\n");
             printf("~ Negate\n");
             printf("M Toggle Menu\n");
             printf("Q Quit\n");
             printf("Enter a selection:  ");
             scanf("%s", menu_sel);             
	     printf("\n");
          }
          else  {
             printf("Enter Selection (M to turn menu on):  ");
             scanf("%s", menu_sel);
             printf("\n");
          }
          switch (menu_sel[0])  {
           /* Addition */           
           case '+': num1 = ReadComplex();
                     num2 = ReadComplex();
                     ans  = AddComplex(num1, num2);
                     WriteComplex(ans);
                     break;

           /* Subtraction */
           case '-': num1 = ReadComplex();
                     num2 = ReadComplex();
                     ans  = SubtractComplex(num1, num2);
                     WriteComplex(ans);
                     break;

           /* Multiplication */
           case 'X':
           case 'x': num1 = ReadComplex();
                     num2 = ReadComplex();
                     ans  = MultiplyComplex(num1, num2);
                     WriteComplex(ans);
                     break;

           /* Division */
           case '/': num1 = ReadComplex();
                     num2 = ReadComplex();
                     DivideComplex(num1, num2);
		     		 break;


           /* Conjugate */ 
           case 'C':
           case 'c': num1 = ReadComplex();
                     ans  = ConjugateComplex(num1);
                     WriteComplex(ans);
                     break;


           /* Negate */
           case '~': num1 = ReadComplex();
                     ans  = NegateComplex(num1);
                     WriteComplex(ans);
                     break;


           /* Toggle Menu */
           case 'M':
           case 'm': showmenu = !showmenu;
                     break;


           /* Quit */
           case 'Q':
           case 'q': quit = TRUE;
                     break;


           default:  printf("%c is not a valid menu option\n", menu_sel [0]);
           }
    }
}
