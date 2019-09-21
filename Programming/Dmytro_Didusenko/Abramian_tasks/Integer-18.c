#include <stdio.h>
#include <conio.h>
main()
{
	int Num, Thousands_alt, Thousands;
	printf("Enter number more than 999 and press Enter \n");
	scanf("%i", &Num);
	Thousands_alt = Num % 10000;
	Thousands = Thousands_alt / 1000;
	printf("Thousands - %i \n", Thousands);
	getch();
}
