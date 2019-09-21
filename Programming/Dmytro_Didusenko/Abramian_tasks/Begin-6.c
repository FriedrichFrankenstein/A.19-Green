#include <stdio.h>
#include <conio.h>
main()
{
	float a, b, c, Square, Volume;
	printf("Enter the sides of the parallelepiped using Space and press Enter \n");
	scanf("%f%f%f", &a, &b, &c);
	Square = 2*(a*b+b*c+a*c);
	Volume = a*b*c;
	printf("Square of the parallelepiped surface = %g and parallelepiped volume = %g", Square, Volume);
	getch();
}
