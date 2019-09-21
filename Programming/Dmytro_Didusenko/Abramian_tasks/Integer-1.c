#include <stdio.h>
#include <conio.h>
main()
{
	int Length_sm, Length_m;
	printf("Input the length in santimeters and press Enter \n");
	scanf("%i", &Length_sm);
	Length_m = Length_sm / 100;
	printf("The length in meters = %i", Length_m);
	getch();
}
