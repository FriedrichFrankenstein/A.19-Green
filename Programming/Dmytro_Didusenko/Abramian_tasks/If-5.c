#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input three various integer nonzero numbers and press Enter button \n");
	int num1, num2, num3, positiveCounter = 0, negativeCounter = 0;
	scanf("%i%i%i", &num1, &num2, &num3);
	if (num1 > 0) positiveCounter = positiveCounter + 1;
	if (num1 < 0) negativeCounter = negativeCounter + 1;
	if (num2 > 0) positiveCounter = positiveCounter + 1;
	if (num2 < 0) negativeCounter = negativeCounter + 1;
	if (num3 > 0) positiveCounter = positiveCounter + 1;
	if (num3 < 0) negativeCounter = negativeCounter + 1;
	printf("Amount of positive numbers - %i \nAmount of negative numbers - %i \n", positiveCounter, negativeCounter);
	getch();
}
