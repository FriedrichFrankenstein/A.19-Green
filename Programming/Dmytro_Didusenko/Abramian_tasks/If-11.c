#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input two integer numbers A and B and press Enter button \n");
	int numA, numB;
	scanf("%i%i", &numA, &numB);
	if (numA != numB) 
	{
		if (numA > numB) numB = numA;
		else numA = numB;
	}
	else 
	{
		numA = numB = 0;
	}
	printf("New values - A = %i and B = %i \n", numA, numB);
	getch();
}
