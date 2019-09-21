#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit, SecondDigit;
	printf("Enter two-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 10;
	printf("%i \n", FirstDigit);
	SecondDigit = Num % 10;
	printf("%i \n", SecondDigit);
	getch();
}
