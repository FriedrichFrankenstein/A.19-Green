#include <stdio.h>
#include <conio.h>
#include <math.h>

float main()
{
	float x1, x2, distance;
	printf("Enter two points end press Enter \n");
	scanf("%f%f", &x1, &x2);
	distance = fabs(x2 - x1);
	printf("Distance between two points X1 and X2 = %.2f \n", distance);
	getch();
	return 0;
}
