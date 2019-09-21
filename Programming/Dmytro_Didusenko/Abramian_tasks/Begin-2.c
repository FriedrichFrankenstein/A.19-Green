#include <stdio.h>
#include <conio.h>
main()
{
	float side, Square;
	printf("Enter the side of the square \n");
	scanf("%f", &side);
	Square = side * side;
	printf("Square of the square is %g \n", Square);
	getch();
}
