#include <stdio.h>
#include <conio.h>
#include <math.h>

float main()
{
	printf("Enter values of three points A, B, C \n(point C located between points A and B) \nand press Enter \n");
	float pointA, pointB, pointC, distanceAC, distanceBC, multiplication;
	scanf("%f%f%f", &pointA, &pointB, &pointC);
	distanceAC = fabs(pointC - pointA);
	distanceBC = fabs(pointB - pointC);
	multiplication = distanceAC * distanceBC;
	printf("Distance between points A and C - %.2f \nDistance between points B and C - %.2f \nMultiplication of distances - %.2f \n",
	distanceAC, distanceBC, multiplication);
	getch();
	return 0;
}
