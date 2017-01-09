#include <stdio.h>
#include <math.h>
#define PI 3.14

/*
Author: Paul Christy
Class: Computer Programming 1 Section 0
Program Summary: This program will generate math functions based on input
Input: stdio and math
Output: stdout
*/

int menu(void);

int main(void) {
    int selection, len, wid, radius, ans;
    float fans;
    printf("Paul Christy\n");
    selection = menu();
    
    while (selection != 4) {
       switch (selection) {
/* Circumference */           
           case 1: printf("What is radius of the circle?:  ");
                   scanf("%d", &radius);
                   if (radius <= 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      break; }
                   else
                      fans = 2 * PI * radius;
                   printf("The Circumference of a circle with a radius of %d times 2 times PI is %.2f\n", radius, fans);
                   break;
/* Area */           
           case 2: printf("What is the length of the rectangle:  ");
                   scanf("%d", &len);
                   if (len < 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the length of the rectangle:  ");
                      scanf("%d", &len); 
                      }
                   if (len == 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the length of the rectangle:  ");
                      scanf("%d", &len); 
                      }
                   printf("What is the width of the rectangle:  ");
                   scanf("%d", &wid); 
                   if (wid < 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the width of the rectangle:  ");
                      scanf("%d", &wid);
                      }
                   if (wid == 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the width of the rectangle:  ");
                      scanf("%d", &wid); 
                      }
                   ans = len * wid; 
                   printf("The Area of a rectangle with a length of %d and a width of %d is %d\n", len, wid, ans);
                   break;  
/* Perimeter */        
           case 3: printf("What is the length of the rectangle:  ");
                   scanf("%d", &len);
                   if (len < 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the length of the rectangle:  ");
                      scanf("%d", &len);
                      }
                   if (len == 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the length of the rectangle:  ");
                      scanf("%d", &len); 
                      }
                   printf("What is the width of the rectangle:  ");
                   scanf("%d", &wid); 
                   if (wid < 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the width of the rectangle:  ");
                      scanf("%d", &wid); 
                      }
                   if (wid == 0) {
                      printf("Error! Number can't be less than or to equal to 0\n");
                      printf("What is the width of the rectangle:  ");
                      scanf("%d", &wid); 
                      }
                      ans = (2 * len) + (2 * wid); 
                   printf("The Perimeter of a rectangle with a length of %d and a width of %d is %d\n", len, wid, ans);
                   break; 
          default: printf("%d is not a valid selection\n", selection);
        }
        selection = menu();
      }
      printf("Midterm Complete!\n");
    }


    int menu(void) {
        int choice;
        printf("1 Circumference of a Circle\n");
        printf("2 Area of a Rectangle\n");
        printf("3 Perimeter of a Rectangle\n");
        printf("4 Quit\n");
        printf("Enter a selection:  ");
        scanf("%d", &choice);
        return choice;
     }
