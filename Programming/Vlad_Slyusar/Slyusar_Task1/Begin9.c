// Найти среднее геометрическое двух неотрицательных чисел.
#include <stdio.h>
#include <math.h>
main ()
{
	float  a, b, average_value;
	printf ("Enter 2 sides(not negative numbers): ");
	scanf ("%f%f", &a, &b);
		if ( a < 0 || b < 0 ){
		printf ("Negative number");
	}
	else {
	average_value = sqrt( a * b );
	printf ("Average value=%g", average_value);
	
}
	getch();
}
