#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	int N,  i = 1, k, sum = 0 , N1, count = 0;
	printf ("Enter number: ");
	scanf ("%i", &N);
	N1 = N;
	do{
		i *= 10;
		k =  N1 % 10;
		N1 = N1 / 10;
		sum += k;
		count++;
		}while (i < N);
		printf ("Sum of Number: %i.\nCount: %i", sum, count)	;
	getch ();
	return 0;
}
