#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float square, length, diameter;
	printf("Input square and press Enter \n");
	scanf("%f", &square);
	diameter = sqrtf((4*square)/3.14);
	length = 3.14*diameter;
	printf("Diameter value - %.2f \nLength value - %.2f \n", diameter, length);
	getch();
	return 0;
}
