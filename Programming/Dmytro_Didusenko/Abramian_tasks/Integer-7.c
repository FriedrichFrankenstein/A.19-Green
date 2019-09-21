#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit, SecondDigit, Sum, Production;
	printf("Enter two-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 10;
	SecondDigit = Num % 10;
	Sum = FirstDigit + SecondDigit;
	Production = FirstDigit * SecondDigit;
	printf("Sum = %i \nProduct = %i \n", Sum, Production);
	getch();
}
