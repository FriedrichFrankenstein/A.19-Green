#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int A , B;
	printf ("Enter numbers: ");
	scanf ("%i%i", &A, &B);
	if (A != B){
		A = B = A + B;
	}
	else {
		A = B = 0;
	}
	printf ("Result: A = %i, B = %i", A, B);
	getch ();
	return 0;
}
