#include <stdio.h>
#include <conio.h>
main()
{
	int Num, FirstDigit;
	printf("Enter three-digit number and press Enter \n");
	scanf("%i", &Num);
	FirstDigit = Num / 100;
	printf("The first digit - %i \n", FirstDigit);
	getch();
}
