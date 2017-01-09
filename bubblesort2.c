#include <stdio.h>
#define MAX 10000
/* Prototype */
int  num1, num2, randu();
void bubble(int*, int);
void swap(int*,int*);
/* Main Program */
int main (int argc, char *argv[]) {
    int x[MAX], i;
    int num1, num2, ans;
/* Argument Count */
    if    (argc == 3) {
          sscanf(argv[1], "%d", & num1); 
} 
/* Enter Number Sorter Values */
    else  printf("How many numbers do wish to sort? ", num1); {
          scanf("%d", & num1);
}
    while ((num1 < 2) || (num1 > 10000)) {
          printf("Error! Number has to greater than two or less than or equal to 10,000\n");
          printf("How many numbers do wish to sort?\n", num1);
          scanf("%d", &num1);
}
/* Call */
    for  (i = 0; i < num1; i++) 
          x[i]=randu(); 
          bubble (x, num1);
    printf("Here are your %d random numbers\n", num1);
    for  (i = 0; i < num1; i++)
          printf("%d ",x[i]);
          printf("\n");
}
/* Subprogram Start */
/* Random number generator */
int randu(){
    static int seed = 17;
    seed = (25179*seed+13849)%65536;
    return seed;
}
/* Bubble Sort Code */
/* Decreasing Order: if (a[j-1] < a[j]) */
void bubble(int a[], int n) {
    int i,j;
     for (i = 0; i < n-1; i++)
      for (j = n-1; i < j; j--)
       if (a[j-1] > a[j])
        swap (&a[j-1], & a [j]);
}
/* Swap Number Code */
void swap(int *a, int *b) {
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
}

