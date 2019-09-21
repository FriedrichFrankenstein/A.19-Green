#include <stdio.h>
#include <conio.h>
main()
{
	float side1, side2, Perim, Square;
	printf("Please, enter the values of sides of the square \n");
	scanf("%f%f", &side1, &side2);
	Perim = 2*(side1 + side2);
	Square = side1*side2;
	printf("Perimeter = %g and Square = %g", Perim, Square);
	getch();
}
