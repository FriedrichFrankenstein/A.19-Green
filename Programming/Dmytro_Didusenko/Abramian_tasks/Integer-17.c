#include <stdio.h>
#include <conio.h>
main()
{
	int Num, Hundreds_alt, Hundreds;
	printf("Enter number more than 999 and press Enter \n");
	scanf("%i", &Num);
	Hundreds_alt = Num % 1000;
	Hundreds = Hundreds_alt / 100;
	printf("Hundreds - %i \n", Hundreds);
	getch();
}
