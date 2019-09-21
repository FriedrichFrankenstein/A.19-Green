#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float A, B, C;
	printf ("Enter 2 numbers: ");
	scanf ("%f%f", &A, &B);
	if ( A > B){
		C = A;
		A = B;
		B = C;
	}
	printf (" Max value: %g, min value: %g", B, A);
	getch ();
	return 0;
}
