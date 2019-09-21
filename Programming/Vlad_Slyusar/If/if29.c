#include <stdio.h>

main ()
{
	int number;
	printf ("Enter number: ");
	scanf ("%i", &number);
	if ( number == 0){
		printf ("Zero");
	}
	else if ( number % 2 == 0){
		if ( number > 0){
			printf ("Plus+even");
		}
		else {
			printf ("Minus+even");
		}
	}
	else if(number > 0){
		printf ("Plus+not_even");
	}
	else {
		printf ("Minus+not_even");
	}
	getch ();
}
	


