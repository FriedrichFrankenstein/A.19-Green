#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{
	int A, B, summ;
	printf ("Enter two number: ");
	scanf ("%i%i", &A, &B);
	if ( A > B){
		printf ("Wrong numbers");
	}
	else {
		for (A++; A < B; A++){	
			summ += pow (A, 2);
	}
	printf ("%i", summ);
	getchar();
	return 0;
	}
}

