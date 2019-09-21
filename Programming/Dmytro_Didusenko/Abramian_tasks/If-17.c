#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input three float pointed numbers and press Enter button \n");
	float num1, num2, num3;
	scanf("%f%f%f", &num1, &num2, &num3);
	if (((num1 > num2)&&(num2 > num3)) || ((num1 < num2)&&(num2 < num3)))
	{
		num1 *= 2;
		num2 *= 2;
		num3 *= 2;	
	}
	else
	{
		num1 *= -1;
		num2 *= -1;
		num3 *= -1;
	}  
	printf("First number - %g, second number - %g, third number - %g \n", num1, num2, num3);
	getch();
}
