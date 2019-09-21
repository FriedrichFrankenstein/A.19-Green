#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	int N,  i = 1, k, k1,  k3 = 0, N1;
	printf ("Enter number: ");
	scanf ("%i", &N);
	N1 = N;
	while (i < N){
		i *= 10;
		k =  N1 % 10;
		N1 = N1 / 10;
		k1 = k % 2 ;
		if ( k1 != 0){
			k3 = 1;
			printf ("TRUE");
			break;
		}
		}
		if ( k3 != 1){
			printf ("False");
		}


	getch ();
	return 0;
}
