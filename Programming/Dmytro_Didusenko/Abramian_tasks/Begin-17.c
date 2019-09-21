#include <stdio.h>
#include <conio.h>
#include <math.h>

float main()
{
	printf("Enter three points A, B, C and press Enter \n");
	float pointA, pointB, pointC, distanceAC, distanceBC;
	scanf("%f%f%f", &pointA, &pointB, &pointC);
	distanceAC = fabs(pointC - pointA);
	distanceBC = fabs(pointC - pointB);
	printf("Distance between points A and C - %.2f \nDistance between points B and C - %.2f", distanceAC, distanceBC);
	getch();
	return 0;
}

