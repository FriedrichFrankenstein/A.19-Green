#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input three numbers and press Enter button \n");
	float num1, num2, num3, numMax1, numMax2;
	scanf("%f%f%f", &num1, &num2, &num3);
	if ((num1 > num3)&&(num2 > num3)) {numMax1 = num1; numMax2 = num2;}
	else
		if ((num1 > num2)&&(num3 > num2)) {numMax1 = num1; numMax2 = num3;}
		else {numMax1 = num2; numMax2 = num3;}
		
	float sumTwoMaxNum = numMax1 + numMax2;
	
	printf("Sum of two maximum numbers - %.2f \n", sumTwoMaxNum);
	getch();
}
