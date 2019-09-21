//Дана длина ребра куба а. Найти объем/площадь куба V = a^3/S=6*a^2.
#include <stdio.h>
#include <math.h>
main ()
{
	float a, S, V;
	printf ("Enter side: ");
	scanf ("%f", &a);
	S = 6 * pow(a, 2);
	V = pow(a, 3);
	printf ("S=%g\nV=%g", S, V);
	getch();

}
