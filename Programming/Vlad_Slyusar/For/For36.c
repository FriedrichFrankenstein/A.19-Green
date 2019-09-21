#include <stdio.h>
#include <conio.h>
#include <math.h>


int main ()
{ 
	int N, K, i, summ = 0;
	printf ("Enter number: ");
	scanf  ("%i%i", &N, &K);
	for (i  ; i <= N; i++){
		summ += pow(i, K);
	}
	printf ("Summ = %i", summ);
	getchar();
	return 0;
}
