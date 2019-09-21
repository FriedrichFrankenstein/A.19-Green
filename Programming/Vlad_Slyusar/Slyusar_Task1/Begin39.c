//Даны коэффициенты A, B, C, нужно найти корни квадтратного уравнения. ( A не равно 0)
#include <stdio.h>
#include <math.h>

main(){
	float  A, B, C, D, x1, x2;
	printf ("Enter A, B, C (A != 0)");
	scanf ("%f%f%f", &A, &B, &C);
	if (A == 0){
		printf ("Wrong number");
	}
	else {
	
	D = pow(B, 2) - 4 * A * C;
	x1 = (-B + sqrt(D)) / ( 2 * A) ;
	x2 = (-B - sqrt(D)) / ( 2 * A );
	printf ("Result: x1=%g, x2=%g", x1, x2);
	}
	getchar();
}
