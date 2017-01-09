#include <stdio.h>
#define TRUE  1
#define FALSE 0

typedef int boolean;

int main(void)  {
    boolean quit = FALSE;
    boolean showmenu = TRUE;
    char menu_sel [2];

    while (!quit)  {
          if (showmenu)  {
             printf("1 Add\n");
             printf("2 Subtract\n");
             printf("3 Multiply\n");
             printf("4 Divide\n");
             printf("5 Conjugate\n");
             printf("6 Negate\n");
             printf("7 Toggle Menu\n");
             printf("8 Quit\n");
             printf("Enter Selection:  ");
             scanf("%s", menu_sel);
          }
          else  {
             printf("Enter Selection (M to turn menu on):  ");
             scanf("%s", menu_sel);
          }
          switch (menu_sel[0])  {
                 /* Addition */
                 case 1: printf("Doing First Option\n");
                         break;
                 /* Subtraction */
                 case 2: printf("Doing Second Option\n");
                         break;
                 /* Multiplication */
                 case 3: printf("Doing Third Option\n");
                         break;
                 /* Division */
                 case 4: printf("Doing Fourth Option\n");
                         break;
                 /* Conjugate */
                 case 5: printf("Doing Fifth Option\n");
                         break;
                 /* Negate */
                 case 6: printf("Doing Sixth Option\n");
                         break;
                 /* Toggle Menu */
                 case 7: showmenu = !showmenu;
                         break;
                 /* Quit */
                 case 8: quit = TRUE;
                         break;
                 default:  printf("%c is not a valid menu option\n", menu_sel [0]);
           }
    }
}
