//Даны два катета а и b, нужно найти гипотенузу и периметр триугольника.
#include <stdio.h>
#include <math.h>
main(){
	float a, b, c, z, P;
	printf ("Enter side a and b:");
	scanf ("%f%f", &a, &b);
	z = pow(a,2) * pow(b,2);
	c = sqrt(z);
	P = a + b + c;
	printf ("c = %g, P = %g", c, P);
	getchar();
}
