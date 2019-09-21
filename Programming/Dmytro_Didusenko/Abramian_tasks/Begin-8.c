#include <stdio.h>
#include <conio.h>
float main()
{
	float a, b, everage;
	printf("Input two numbers a and b and press Enter \n");
	scanf("%f%f", &a, &b);
	everage = (a+b)/2;
	printf("Everage of two numbers %g and %g is %g \n", a, b, everage);
	getch();
	return 0;
}
