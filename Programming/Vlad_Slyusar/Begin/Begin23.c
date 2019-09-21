#include <stdio.h>
#include <math.h>

main(){
	float A, B, C, A1, B1, C1;
	printf ("kifsjdfsd:");
	scanf ("%f%f%f", &A, &B, &C);
	A1 = A;
	B1 = B;
	C1 = C;
	printf ("A = %g, B = %g, C = %g \n", A, B, C);
	B = A1;
	C = B1;
	A = C1;
	printf ("A = %g, B = %g, C = %g", A, B, C);
	getchar();
}
