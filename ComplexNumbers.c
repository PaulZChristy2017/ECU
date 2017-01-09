#include <stdio.h>
#define TRUE 1
#define FALSE 0


typedef struct  {
	int real;
	int img;
}complex;

typedef int boolean;
	boolean quit = FALSE;
	boolean showmenu = TRUE;
	char menu_sel[2];

/* Input/Output */
num1 = ReadComplex;
num2 = ReadComplex;
ans  = Complex(num1, num2);
WriteComplex(ans);

complex ReadComplex(void);

Complex ReadComplex(void) {
	complex num1, num2;
	printf("Enter first real part:  ");
	scanf("%d", & num1.real);
	printf("Enter first img part:  ");
	scanf("%d", & num1.img);
	printf("Enter second real part:  ");
	scanf("%d", & num2.real);
	printf("Enter second img part:  ");
	scanf("%d", & num2.img);
	return num1, num2;
}

complex AddComplex(complex, complex);

complex AddComplex(complex, complex)  {
	complex n1, n2, ans;
	printf("Enter first real part:  ");
	scanf("%d", & n1.real);
	printf("Enter first img part:  ");
	scanf("%d", & n1.img);
	printf("Enter second real part:  ");
	scanf("%d", & n2.real);
	printf("Enter second img part:  ");
	scanf("%d", & n2.img);
	ans.real = n1.real + n2.real;
	ans.img = n1.img + n2. img;
	return ans; }


complex SubtractComplex(complex, complex);

complex SubtractComplex(complex, complex)  {
	complex n1, n2, ans;
	printf("Enter first real part:  ");
	scanf("%d", & n1.real);
	printf("Enter first img part:  ");
	scanf("%d", & n1.img);
	printf("Enter second real part:  ");
	scanf("%d", & n2.real);
	printf("Enter second img part:  ");
	scanf("%d", & n2.img);
	ans.real = n1.real - n2.real;
	ans.img = n1.img - n2.img;
	return ans; }


complex MultiplyComplex(complex, complex);

complex MultiplyComplex(complex, complex)  {
	complex num1, num2, ans;
	printf("Enter first real part:  ");
	scanf("%d", & num1.real);
	printf("Enter first img part:  ");
	scanf("%d", & num1.img);
	printf("Enter second real part:  ");
	scanf("%d", & num2.real);
	printf("Enter second img part:  ");
	scanf("%d", & num2.img);
	ans.real = num1.real * num2.real - num1.img * num2.img;
	ans.img  = num1.real * num2.real + num1.img * num2.img;
	return ans;  }

complex DivideComplex(complex, complex);

complex DivideComplex(complex, complex)  {
	complex numer, denom, ans;
	complex num1, num2;
	float ans_real, ans_img;
	printf("Enter first real part:  ");
	scanf("%d", & n1.real);
	printf("Enter first img part:  ");
	scanf("%d", & n1.img);
	printf("Enter second real part:  ");
	scanf("%d", & n2.real);
	printf("Enter second img part:  ");
	scanf("%d", & n2.img);
	denom = multiply(num2, conjugate(num2));
	numer = multiply(num1, conjugate(num2));
	ans_real = (float)numer.real/denom.real;		  
	ans_img  = (float)numer.img/denom.real;
	return ans;  }

complex ConjugateComplex(complex, complex);

complex ConjugateComplex(complex, complex)  {
	complex n, ans;
	printf("Enter real part:  ");
	scanf("%d", & n.real);
	printf("Enter img part:  ");
	scanf("%d", & n.img);
	ans.real = n.real;
	ans.img  = -1 * n.img;
	return ans;  }

complex NegateComplex(complex, complex);

complex NegateComplex(complex, complex)  {
	complex n, ans;
	printf("Enter real part:  ");
	scanf("%d", & n.real);
	printf("Enter img part:  ");
	scanf("%d", & n.img);
	ans.real = -1 * n.real;
	ans.img  = -1 * n.img;
	return ans;  }

/* Main Program */
int main(void) {

	while (!quit) {
	      if (showmenu) {
		 printf("+ Add\n");
		 printf("- Subtract\n");
		 printf("X Multiply\n");
		 printf("/ Divide\n");
		 printf("C Conjugate\n");
		 printf("~ Negate\n");
		 printf("M Toggle Menu\n");
		 printf("Q Quit\n");
                 printf("Enter Selection:  ");
		 scanf("%s", menu_sel);
	      }
	      else {
		 printf("Enter Selection (M to turn menu on):  ");
		 scanf("%s", menu_sel);
	      }
	      switch (menu_sel[0]) {

		/* Addition */
		case '+':  num1 = AddComplex();
			   num2 = AddComplex();
			   ans  = AddComplex(n1, n2);
			   WriteComplex(ans);
			   break;

		/* Subtraction */
		case '-':  num1 = SubtractComplex();
			   num2 = SubtractComplex();
			   ans  = SubtractComplex(num1, num2);
			   WriteComplex(ans);
			   break;

		/* Multiplication */
		case 'X':
		case 'x':  num1 = MultiplyComplex();
			   num2 = MultiplyComplex();
			   ans.real = num1.real * num2.real - num1.img * num2.img;
			   ans.img  = num1.real * num2.real + num1.real * num1.img;
			   WriteComplex(ans);
			   break;

		/* Division */
		case '/':  denom = multiply (num2, conjugate(num2));
			   numer = multiply (num1, conjugate(num2));
			   ans_real = (float)numer.real/denom.real;		  
			   ans_img  = (float)numer.img/denom.real;
			   break;

		/* Conjugate */
		case 'C':
		case 'c':  num1 = ConjugateComplex();
			   num2 = ConjugateComplex();
			   ans  = MultiplyComplex(num1, num2);
			   ans.real = num1.real;
			   ans.img  = -1 * num1.img;
			   WriteComplex(ans);
			   break;

		/* Negate */
		case 'C':
		case 'c':  num1 = NegateComplex();
			   num2 = NegateComplex();
			   ans  = MultiplyComplex(num1, num2);
			   ans.real = -1 * num1.real;
			   ans.img  = -1 * num1.img;
			   WriteComplex(ans);
			   break;

		/* Toggle Menu */
		case 'M':
		case 'm':  showmenu = !showmenu;
			   break;

		/* Quit */
		case 'Q':
		case 'q':  quit = TRUE;
			   break;

}
