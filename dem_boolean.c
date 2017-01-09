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
             printf("A First Option\n");
             printf("B Second Option\n");
             printf("C Third Option\n");
             printf("M Toggle Menu\n");
             printf("Q Quit\n");
             printf("Enter Selection:  ");
             scanf("%s", menu_sel);
          }
          else  {
             printf("Enter Selection (M to turn menu on):  ");
             scanf("%s", menu_sel);
          }
          switch (menu_sel[0])  {
                 case 'A':
                 case 'a': printf("Doing First Option\n");
                           break;
                 case 'B':
                 case 'b': printf("Doing Second Option\n");
                           break;
                 case 'C':
                 case 'c': printf("Doing Third Option\n");
                           break;
                 case 'M':
                 case 'm': showmenu = !showmenu;
                           break;
                 case 'Q':
                 case 'q': quit = TRUE;
                           break;
                 default:  printf("%c is not a valid menu option\n", menu_sel [0]);
           }
    }
}
