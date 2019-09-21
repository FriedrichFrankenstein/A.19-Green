#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input two integer numbers A and B \n");
	int numA, numB;
	scanf("%i%i", &numA, &numB);
	if (numA != numB)
	{
		int sum = numA + numB;
		numA = numB = sum;
	}	
	else
	{
		numA = numB = 0;
	}
	printf("New values A = %i and B = %i \n", numA, numB);
	getch();
}
