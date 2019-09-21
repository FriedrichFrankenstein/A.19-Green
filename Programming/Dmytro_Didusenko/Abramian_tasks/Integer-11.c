#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit, SecondDigit_alt, SecondDigit, ThirdDigit, Production;
	printf("Enter three-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 100;
	SecondDigit_alt = Num % 100;
	SecondDigit = SecondDigit_alt / 10;
	ThirdDigit = SecondDigit_alt % 10;
	Production = FirstDigit * SecondDigit * ThirdDigit;
	printf("Production of three digits %i, %i and %i is %i \n", FirstDigit, SecondDigit, ThirdDigit, Production);
	getch();
}
