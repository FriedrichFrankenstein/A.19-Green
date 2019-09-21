#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int A, B, C, average;
	printf ("Enter 3 numbers: ");
	scanf ("%i%i%i", &A, &B, &C);
	if ( A > B && A > C){
		if (B > C){
			 average = B;
		}
		else {
			 average = C;
		}
	}
	else if (B > C && B > A) { 
		if (A > C){
			 average = A;
		}
		else {
			 average = C;
		}
	}
	else {
		if ( B > A){
			 average = B;
		}
		else {
			 average = A;
		}
		}
			printf ("Average = %i",  average);

	getch ();
	return 0;		
	}

