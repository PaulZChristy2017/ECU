#include <stdio.h>

/* 
   Author: Paul Christy
   Course: Computer Programming - Section 0
   Program Summary: This program will count and give total value of coins that are given.
   Input:  Ask you how many of each you have
   Output: It will total the amount coins you have and give you the tota value.
*/

int main(void) {
    int h,q,d,n,p,number;
    float value;

/*
    Program asks you how many coins you have and lets you input the answer
*/
    printf("How many half dollars do you have?\n");
    scanf("%3d",& h);
    while(h < 0){
          printf("Error! Can't be negative!\n");
          printf("How many half dollars do you have?\n");
          scanf("%3d",& h);
}
    printf("How many quarters do you have?\n");
    scanf("%3d",& q);
    while(q < 0){
          printf("Error! Can't be negative!\n");
          printf("How many quarters do you have?\n");
          scanf("%3d",& q);
}
    printf("How many dimes do you have?\n");
    scanf("%3d",& d);
    while(d < 0){
          printf("Error! Can't be negative!\n");
          printf("How many dimes do you have?\n");
          scanf("%3d",& d);
}
    printf("How many nickels do you have?\n");
    scanf("%3d",& n);
    while(n < 0){
          printf("Error! Can't be negative!\n");
          printf("How many nickels do you have?\n");
          scanf("%3d",& n);
}
    printf("How many pennies do you have?\n");
    scanf("%3d",& p);
    while(p < 0){
          printf("Error! Can't be negative!\n");
          printf("How many pennies do you have?\n");
          scanf("%3d",& p);
}
/*
    Puts in the equation to get the total value and the total amount of coins.
*/
    number = h + q + d + n + p;
    value = 0.5 * h + 0.25 * q + 0.1 * d + 0.05 * n + 0.01 * p;
/*
    Shows the input and compiles the output
*/
    printf("\nYou entered the following money:\n\n");
    if (h!=0)  {
    if (h>1)
    printf("%3d half dollars\n",h);
    else
    printf("%3d half dollar\n",h);
}
    if (q!=0)  {
    if (q>1)
    printf("%3d quarters\n",q);
    else
    printf("%3d quarter\n",q);
}
    if (d!=0)  {
    if (d>1)
    printf("%3d dimes\n",d);
    else
    printf("%3d dime\n",d);
}
    if (n!=0)  {
    if (n>1)
    printf("%3d nickels\n",n);
    else
    printf("%3d nickel\n",n);
}
    if (p!=0)  {
    if (p>1)
    printf("%3d pennies\n",h);
    else
    printf("%3d penny\n",h);
}
    printf("\nThese %3d coins add up to a total of $%.2f\n", number, value);
}
