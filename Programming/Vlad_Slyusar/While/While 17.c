#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	int N,  i = 1, k, k1,  k3 = 0, N1;
	printf ("Enter number: ");
	scanf ("%i", &N);
	N1 = N;
	do{
		i *= 10;
		k =  N1 % 10;
		N1 = N1 / 10;
		printf ("%i ", k);
		}while (i < N);
	getch ();
	return 0;
}
