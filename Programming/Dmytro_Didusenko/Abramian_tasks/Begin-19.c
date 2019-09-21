#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("Input coordinates of opposite tops of rectangle \nusing format (x1, y1) and (x2, y2) \nand press Enter \n");
	int pointX1, pointX2, pointY1, pointY2, sideX2X1, sideY2Y1, areaRect, perimRect;
	scanf("%i%i%i%i", &pointX1, &pointY1, &pointX2, &pointY2);
	sideX2X1 = abs(pointX2 - pointX1);
	sideY2Y1 = abs(pointY2 - pointY1);
	areaRect = sideX2X1 * sideY2Y1;
	perimRect = 2 * (sideX2X1 + sideY2Y1);
	printf("Coordinates of opposite tops - (%i, %i) and (%i, %i); \nArea of rectangular - %i \nPerimeter of rectangular - %i \n",
	pointX1, pointY1, pointX2, pointY2, areaRect, perimRect);
	getch();
	return 0;
}
