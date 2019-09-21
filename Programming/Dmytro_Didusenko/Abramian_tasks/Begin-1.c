#include <stdio.h>
#include <conio.h>
main()
{
	int side, Perim;
	printf("Please, enter the side value and press Enter \n");
	scanf("%i", &side);
	Perim = 4 * side;
	printf("Perimeter of the square with the side %i is %i", side, Perim);
	getch();
}
