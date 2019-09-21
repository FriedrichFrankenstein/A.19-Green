#include <stdio.h>
#include <conio.h>
#include <math.h>

float main()
{
	float a, b, sum, differ, prod, quot;
	printf("Input two numbers A and B and press Enter \n");
	scanf("%f%f", &a, &b);
	sum = powf(a, 2) + powf(b, 2);
	differ = powf(a, 2) - powf(b, 2);
	prod = powf(a, 2) * powf(b, 2);
	quot = powf(a, 2)/powf(b, 2);
	printf("Sum = %g \nDifference = %g \nProduct = %g \nQuotient = %g \n", sum, differ, prod, quot);
	getch();
	return 0;
}
