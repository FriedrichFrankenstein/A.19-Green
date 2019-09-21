#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	int A, B, C, S = 0, S2 = 0,  i = 0, i2 = 0,  numberOfC = 0;
	printf ("Enter numbers: ");
	scanf ("%i%i%i", &A, &B, &C);
	while ( i < B){
		i++;
		S += A;
	}
	while ( i2 < C){
		i2++;
		S2 += C;
	}
	while (S > 0){
		S -=S2;
		numberOfC++;
		if ( S  < S2){
			break;
		}
	}
	printf ("Result: %i", numberOfC );
	getch ();
	return 0;
}
