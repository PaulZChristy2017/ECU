#include <stdio.h>
#include <math.h>

/*
Author: Paul Christy
Class: Computer Programming 1 Section 0
Program Summary: This program will generate math functions based on input
Input: stdio and math
Output: stdout
*/

int menu(void);

int main(void) {

    int selection, num1, num2, ans;

    float fans;

    selection = menu();

    while (selection != 8) {

       switch (selection) {

/* Addition */           
           case 1: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   printf("Enter 2nd number:  ");
                   scanf("%d", &num2);
                   ans = num1 + num2;
                   printf("%d + %d = %d\n", num1, num2, ans);
                   break;

/* Subtraction */           
           case 2: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   printf("Enter 2nd number:  ");
                   scanf("%d", &num2);
                   ans = num1 - num2;
                   printf("%d - %d = %d\n", num1, num2, ans);
                   break;

/* Multiplication */        
           case 3: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   printf("Enter 2nd number:  ");
                   scanf("%d", &num2);
                   ans = num1 * num2;
                   printf("%d * %d = %d\n", num1, num2, ans);
                   break;

/* Division */
           case 4: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   printf("Enter 2nd number:  ");
                   scanf("%d", &num2);

                   if (num2 == 0){
                      printf("Error! Can't divide by zero\n");
	           			 break;
                   }

	           		 else {
                   	 fans = (float)num1/num2;
                   	 printf("%d / %d = %.2f\n", num1, num2, fans);
                   	 break;
                   }

/* Absolute Value */ 
           case 5: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   ans = abs (num1);
                   printf("|%d| = %d\n", num1, ans);
                   break;

/* Square Root */
           case 6: printf("Enter 1st number:  ");
                   scanf("%d", &num1);

                   if (num1 < 0){
                      printf("Error! Can't take square root of negative number\n");
                   	 break;
                   }

                   else {
                      fans = sqrt(num1);  
                   	 printf("sqrt(%d) = %f\n", num1, fans);
                   	 break;
                   }

/* Powers */
           case 7: printf("Enter 1st number:  ");
                   scanf("%d", &num1);
                   printf("Enter 2nd number:  ");
                   scanf("%d", &num2);

                   if ((num1 == 0)&&(num2 <= 0))
                       printf("Error! 0 ^ 0 can't be represented\n");

                   else
                       fans = pow(num1, num2);  
                   printf("%d ^ %d = %f\n", num1, num2, fans);

                   break;

          default: printf("%d is not a valid selection\n", selection);
        }
        selection = menu();
      }
      printf("Bye!\n");
    }


    int menu(void) {
        int choice;
        printf("1 Add\n");
        printf("2 Subtract\n");
        printf("3 Multiply\n");
        printf("4 Divide\n");
        printf("5 Absolute Value\n");
        printf("6 Square Root\n");
        printf("7 Powers\n");
        printf("8 Quit\n");
        printf("Enter a selection:  ");
        scanf("%d", &choice);
        return choice;
     }
