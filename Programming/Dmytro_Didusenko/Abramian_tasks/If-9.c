#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input two floatpointed numbers and press Enter button \n");
	float numA, numB, numA_alt, numB_alt;
	scanf("%f%f", &numA, &numB);
	numA_alt = numA;
	numB_alt = numB;
	if (numA < numB) 
	{
	printf("Minimal number - A = %g \nMaximal number - B = %g \n", numA, numB);
	}
	else
	{
	numA = numB;
	numB = numA_alt;
	printf("Minimal number - A = %g \nMaximal number - B = %g \n", numA, numB);
	}
	getch();
}
