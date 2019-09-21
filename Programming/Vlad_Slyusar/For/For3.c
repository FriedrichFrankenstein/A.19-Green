#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{
	int A, B, countOfNumbers;
	printf ("Enter two number: ");
	scanf ("%i%i", &A, &B);
	if ( A > B){
		printf ("Wrong numbers");
	}
	else {
		for (A++; A < B;A++ ){
			printf ("%i\n", A);
			countOfNumbers++;
		}
	}
	getch ();
	return 0;
}
