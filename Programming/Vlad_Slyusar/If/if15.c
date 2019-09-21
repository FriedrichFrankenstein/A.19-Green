#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int A, B, C, sumOfThem;
	printf ("Enter 3 numbers: ");
	scanf ("%i%i%i", &A, &B, &C);
	if ( A > B && A > C){
		if (B > C){
			 sumOfThem = A + B;
		}
		else {
			 sumOfThem = A + C;
		}
	}
	else if (B > C && B > A) { 
		if (A > C){
			 sumOfThem = B + A;
		}
		else {
			 sumOfThem = B + C;
		}
	}
	else {
		if ( B > A){
			 sumOfThem = C + B;
		}
		else {
			 sumOfThem = C + A;
		}
		}
	printf ("Summ two numbers = %i", sumOfThem)	;
		getch ();
	return 0;
}
