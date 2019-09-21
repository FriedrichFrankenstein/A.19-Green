#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit, SecondDigit_alt, SecondDigit, ThirdDigit;
	printf("Enter three-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 100;
	SecondDigit_alt = Num % 100;
	SecondDigit = SecondDigit_alt / 10;
	ThirdDigit = SecondDigit_alt % 10;
	printf("New number - %i%i%i \n", SecondDigit, FirstDigit, ThirdDigit);
	getch();
}
