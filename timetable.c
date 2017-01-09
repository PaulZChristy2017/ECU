#include <stdio.h>

/* 
   Author: Paul Christy
   Course: Computer Programming - Section 0
   Program Summary: This program is a multiplication table that ranges from -10 to 10
   Input:  stdin
   Output: stdout
*/

int main(int argc, char *argv[]) {
    int inc, num, i, row, col;


	/* Argument Count 1 */
    if (argc == 1) 
	{
       printf("What number do you want to go to in the table?\n");
       scanf("%d",& num);


		/* num error message */
       	if (num > 10) 
		{  
        	printf("Error! The table has to have a range between -10 and 10.\n");  
          	printf("Enter a range between negative ten and ten.\n");
          	scanf("%d",& num); 
		}

       	if (num < -10) {  
        	printf("Error! The table has to have a range between -10 and 10.\n");  
          	printf("Enter a range between negative ten and ten.\n");
          	scanf("%d",& num); 
		}


		/* Increment value */
       	printf("What increment do you want for the table?\n");
       	scanf("%d",& inc); 


		/* inc error message */ 
       	if (inc > 10) 
		{
          	printf("Error! The table has to have an increment between 1 and 10.\n"); 
          	printf("Enter an increment between one and ten.\n");
          	scanf("%d",& inc); 
		}
	
       	if (inc < 0) 
		{
          	printf("Error! The table has to have an increment between 1 and 10.\n"); 
         	printf("Enter an increment between one and ten.\n");
          	scanf("%d",& inc); 
		}
}


	/* Argument Count 2 */
    if (argc == 2) 
	{
       printf("Error! Command line argument has to have 0 or 2 numbers.\n"); 
	} 


	/* Argument Count 3 */
    if (argc == 3) 
	{ 
       	if (0 < num <= 10) 
		{          
          	sscanf(argv[1], "%d",& num); 
          	printf("The table has an acceptable range.\n", num); 
		}


		/* num error message */
        if (num > 10) 
		{
        	printf("Error! The table has to have a range between -10 and 10.\n");  
            printf("Enter a range between negative ten and ten.\n");
            scanf("%d",& num); 
		}
  
        if (num < -10) 
		{
        	printf("Error! The table has to have a range between -10 and 10.\n");  
            printf("Enter a range between negative ten and ten.\n");
            scanf("%d",& num); 
		}


		/* Increment value */     
       	if (0 < inc <= 10) 
		{
          	printf("The table has an acceptable increment.\n"); 
          	sscanf(argv[2], "%d",& inc);  
		}

		/* inc error message */
        if (inc > 10) 
		{
        	printf("Error! The table has to have an increment between 1 and 10.\n"); 
            printf("Enter an increment between one and ten.\n");
            scanf("%d",& inc); 
		}

        if (inc < 0) 
		{
            printf("Error! The table has to have an increment between 1 and 10.\n"); 
            printf("Enter an increment between one and ten.\n");
            scanf("%d",& inc); 
		}
	}


	/* Mulitication Table */
    printf("     ");
	/* row for loop */
    for (row = -num; row <= num; row = row + inc) 
        printf(" %4d", row);
        printf("\n"); 
	/* colomn for loop */
    for (row = -num; row <= num; row = row + inc) 
	{
        printf(" %4d", row);
		/* row times column for loop */
        for (col = -num; col <= num; col = col + inc)  
        	printf(" %4d", row * col);
            printf("\n"); 
	} 
}
