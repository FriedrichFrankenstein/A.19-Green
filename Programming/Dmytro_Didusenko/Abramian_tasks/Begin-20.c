#include <stdio.h>
#include <conio.h>
#include <math.h>

float main()
{
	printf("Input coordinates of two points (x1, y1) and (x2, y2) \n");
	float pointX1, pointY1, pointX2, pointY2, distance;
	scanf("%f%f%f%f", &pointX1, &pointY1, &pointX2, &pointY2);
	distance = sqrtf(powf((pointX2-pointX1), 2) + powf((pointY2-pointY1), 2));
	printf("Distance between points (%.2f, %.2f) and (%.2f, %.2f) - %.2f \n", pointX1, pointY1, pointX2, pointY2, distance);
	getch();
	return 0;
}
