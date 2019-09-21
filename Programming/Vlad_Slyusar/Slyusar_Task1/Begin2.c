//Дана сторона квадрата а. Найти его площадь S = a^2.
#include <stdio.h>
#include <math.h>
main ()
{
	
	float side, S;
	printf ("Side ");
	scanf ("%f", &side);
	S = pow (side, 2);
	printf ("S = %g", S);
	getch();
}
