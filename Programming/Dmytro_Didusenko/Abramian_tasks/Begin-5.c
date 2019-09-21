#include <stdio.h>
#include <conio.h>
main()
{
	float side, Square, Volume;
	printf("Enter the side of the cube and press Enter \n");
	scanf("%f", &side);
	Square = 6*side*side;
	Volume = side*side*side;
	printf("Square of the cube surface = %g and cube volume = %g", Square, Volume);
	getch();
}
