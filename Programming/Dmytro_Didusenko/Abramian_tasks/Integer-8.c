#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit, SecondDigit;
	printf("Enter two-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 10;
	SecondDigit = Num % 10;
	printf("%i%i \n", SecondDigit, FirstDigit);
	getch();
}
