#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input float pointed value X and press Enter button \n");
	float numX, funcValue;
	scanf("%f", &numX);	
	if (numX <= 0) funcValue = -1*numX;
	if ((0 < numX)&&(numX <2)) funcValue = numX*numX;
	if (numX >= 2) funcValue = 4;
	printf("Function Value - %.2f", funcValue);
	getch();
}
