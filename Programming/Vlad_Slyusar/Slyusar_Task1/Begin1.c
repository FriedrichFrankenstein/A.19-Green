// Дана сторона квадрата а. Найти его периметр P = 4 * а.
#include <stdio.h>

int main ()
{	
	float side, Perim;
	printf ("Input side  = ");
	scanf ("%f", &side);
	Perim = side * 4;
	printf ("A=%g\nP=4*A=4*%g=%g", side, side, Perim);
	getch();
	return 0;
}
