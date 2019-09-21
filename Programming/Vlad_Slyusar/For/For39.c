#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
		int A, B, i;
		printf ("Enter number: ");
		scanf ("%i%i", &A, &B);
		for (A; A <= B; A++){
			for (i = 1 ;i <= A; i++){
				printf ("%i", A);
			}
			printf ("\n");
		}
		
	getch ();
	return 0;
}
