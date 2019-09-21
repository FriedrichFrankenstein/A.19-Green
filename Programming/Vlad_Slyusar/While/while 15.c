#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	float P;
	int originalMoney = 1000, moneyInTheEnd = 1000, counter = 0;
	printf ("Enter P (0 - 0.25): ");
	scanf ("%f", &P);
	if (P < 0 || P >= 0.25){
		printf ("Wrong P");
		}
		else  {
			P++;
			printf  ("P = %f\n", P);
		while ( moneyInTheEnd < 1100){
			counter ++;
			moneyInTheEnd *=  P;
		 }
		}
		printf ("Money in the End: %i; number of months: %i", moneyInTheEnd, counter);
	getch ();
	return 0;
	}

