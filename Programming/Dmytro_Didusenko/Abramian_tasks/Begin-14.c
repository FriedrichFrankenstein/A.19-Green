#include <stdio.h>
#include <conio.h>
#include <math.h>
float main()
{
	float length, radius, area;
	printf("Enter the length os the circle end press Enter button \n");
	scanf("%f", &length);
	radius = length / (2 * 3.14);
	area = 2 * 3.14 * pow(radius, 2);
	printf("Area of the circle - %g \n", area);
	getch();
	return 0;
}
