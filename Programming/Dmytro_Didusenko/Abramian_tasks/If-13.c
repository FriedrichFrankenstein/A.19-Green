#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input three integer numbers and press Enter button \n");
	int num1, num2, num3, numAverage;
	scanf("%i%i%i", &num1, &num2, &num3);
	
	if ((num2 > num1)&&(num1 > num3) || (num3 > num1)&&(num1 > num2)) numAverage = num1;
	else 
		if ((num1 > num2)&&(num2 > num3) || (num3 > num2)&&(num2 > num1)) numAverage = num2;
		else numAverage = num3;

	printf("Average number - %i", numAverage);
	
	getch();
	return 0;
}
