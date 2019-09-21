#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
		int A, B, i, counter = 0;
		printf ("Enter number: ");
		scanf ("%i%i", &A, &B);
		for (A; A <= B; A++){
			counter ++;
			for (i = 1 ;i <= counter; i++){
				printf ("%i", A);
			}
			printf ("\n");
		}
		
	getch ();
	return 0;
}
