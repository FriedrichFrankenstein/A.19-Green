//task 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaOfTheRectangle(){
float x1, x2, x3, x4, y1, y2, y3, y4;
float AB, BC, S;
printf ("Inrut x1, y1, x2, y2\n");
scanf ("%f%f%f%f", &x1, &y1, &x2, &y2);
	if (x1 < 0) x1=0;
	if (x2 < 0) x2=0;
	if (y1 < 0) y1=0;
	if (y2 < 0) y2=0;
	printf ("Inrut x3, y3, x4, y4\n");
	scanf ("%f%f%f%f", &x3, &y3, &x4, &y4);
	if (x3 < 0) x3=0;
	if (x4 < 0) x4=0;
	if (y3 < 0) y3=0;
	if (y4 < 0) y4=0;
	AB = sqrt ( pow ( x2 - x1, 2) + pow ( y2 - y1, 2));
	printf("AB = %g\n", AB);
	BC = sqrt ( pow ( x3 - x2, 2) + pow ( y3 - y2, 2));
	printf("BC = %g\n", BC);
	S = AB * BC;
	printf("S = AB * BC = %g * %g = %g", AB, BC, S);
}

int main(){
	areaOfTheRectangle();
}
