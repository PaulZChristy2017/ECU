#include <stdio.h>
#include <math.h>

/*
   Author:  Paul Christy
   Course:  Computer Programming 2
   Program: Midterm Program
*/

int main(int argc, char *argv[]) { /* Start of Main Program */
	float num1, num2, ans;
	char op;

	if (argc = 1) 
		printf("Error! Agrument Count has to 3 or 4 on the command line.\n");

	if (argc > 5) 
		printf("Error! Agrument Count has to 3 or 4 on the command line.\n");

	if (argc = 4) { /* Start of If Argument Count is 4 */

		sscanf(argv[1], "%f", &num1);
		sscanf(argv[2], "%c", &op);
		sscanf(argv[3], "%f", &num2); 
 
       			switch (op) { /* Start of Switch Operator */


	   	/* Addition */           
           	case '+': 	ans = num1 + num2;
                   		printf("%.2f + %.2f = %.2f\n", num1, num2, ans);
                   		break;

	  	 /* Subtraction */           
           	case '-': 	ans = num1 - num2;
                   		printf("%.2f - %.2f = %.2f\n", num1, num2, ans);
                   		break;


	  	 /* Multiplication */   
	   	case 'X':     
           	case 'x': 	ans = num1 * num2;
                   		printf("%.2f * %.2f = %.2f\n", num1, num2, ans);
                   		break;


	  	 /* Division */
           	case '/': 	if (num2 == 0) {
                      			printf("Error! Can't divide by zero\n");
	           		break;
                   		}
	           		else {
                   			ans = (float)num1/num2;
                   		printf("%.2f / %.2f = %.2f\n", num1, num2, ans);
                   		break;
                  		}

	default: printf("%c is not a valid operator!\n", op);	

			} /* End of Switch Operator */

	} /* End of If Argument Count is 4 */

	if (argc = 3) { /* Start of If Argument Count 3 */

		sscanf(argv[1], "%c", &op);
		sscanf(argv[2], "%f", &num1); 
   	 		switch (op) {


	   		/* Negate */	   
	   		case 'n': 	ans = -1 * num1;
                   		 	printf("- (%.2f) = %.2f\n", num1, ans);
                   			break;	


	  		/* Absolute Value */ 
          		case 'a': 	ans = fabs (num1);
                   			printf("|%.2f| = %.2f\n", num1, ans);
                   			break;


	   		/* Square Root */
           		case 's': 	if (num1 < 0){
               		       			printf("Error! Can't take square root of negative number\n");
                  				break;
                   			  }

                   			else {
                      				ans = sqrt(num1);  
                   				printf("sqrt(%.2f) = %.2f\n", num1, ans);
                   				break;
                   			  }

	default: printf("%c is not a valid operator!\n", op);



			} /* Switch Operator */

	} /* End of If Argument Count 3 */ 

} /* End of Main Program */
