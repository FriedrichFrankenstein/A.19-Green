#include <stdio.h>
#include <conio.h>
#include <math.h>
float main()
{
	float a, b, sum, differ, prod, quot;
	printf("Input two numbers A and B and press Enter \n");
	scanf("%f%f", &a, &b);
	sum = fabs(a) + fabs(b);
	differ = fabs(a) - fabs(b);
	prod = fabs(a) * fabs(b);
	quot = fabs(a) / fabs(b);
	printf("Sum = %g \nDifference = %g \nProduct = %g \nQuotient = %g \n", sum, differ, prod, quot);
	getch();
	return 0;	
}
