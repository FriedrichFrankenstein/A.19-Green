/*Найти суму, разность, произведение,
 частное квадратов и модулей двух ненулевых чисел. */
#include <stdio.h>
#include <math.h>
main ()
{
	
	float a, b, summ, diff, prod, share1, share2;

	printf ("Enter 2 numbers (not zero): ");
	scanf ("%f%f", &a, &b);

	if  ( a == 0 || b == 0 ){
		printf ("Zero is prohibited");
	}
	else {
		summ = a + b;
		diff = a - b;
		prod = a * b;
		share1 = pow(a, 2) / pow(b, 2);
		share2 = fabs(a) / fabs(b);
		printf ("Summ=%g\nDiff=%g\nProd=%g\nShare1=%g\nShare2=%g", summ, diff, prod, share1, share2);

	}
	getchar();


}
