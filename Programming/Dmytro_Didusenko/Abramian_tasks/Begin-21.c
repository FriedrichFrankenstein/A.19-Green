#include <stdio.h>
#include <conio.h>
#include <math.h>

float sideCalculation(float coordX_First, float coordY_First, float coordX_Second, float coordY_Second)
{
	float length = sqrtf(powf((coordX_Second - coordX_First), 2) + powf((coordY_Second - coordY_First), 2));
	return length;
}

float main()
{
	printf("Input coordinates of three points (x1, y1), (x2, y2), (x3, y3) \nand press Enter button \n");
	float pointX1, pointY1, pointX2, pointY2, pointX3, pointY3, halfPerim, area;
	scanf("%f%f%f%f%f%f", &pointX1, &pointY1, &pointX2, &pointY2, &pointX3, &pointY3);
	
	float side1 = sideCalculation(pointX1, pointY1, pointX2, pointY2);
	float side2 = sideCalculation(pointX2, pointY2, pointX3, pointY3);
	float side3 = sideCalculation(pointX1, pointY1, pointX3, pointY3);
	
	halfPerim = (side1 + side2 + side3)/2;
	area = sqrtf(halfPerim*(halfPerim - side1)*(halfPerim - side2)*(halfPerim - side3));
	
	printf("The area of triangle - %.2f \n", area);
	
	getch();
	return 0;
}
