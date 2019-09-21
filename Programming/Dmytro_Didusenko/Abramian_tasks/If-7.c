#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input two ineger numbers and press Enter button \n");
	int numOne, numTwo;
	scanf("%i%i", &numOne, &numTwo);
	if (numOne < numTwo) printf("Number one is minimal");
	if (numOne > numTwo) printf("Number two ic minimal");
	if (numOne == numTwo) printf("Number one and number two are equal");
	getch();
}
