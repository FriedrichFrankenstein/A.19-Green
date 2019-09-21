#include <stdio.h>
#include <math.h>

int main ()
{
	int year;
	printf ("Enter year: ");
	scanf ("%i", &year);
	if ( year % 4 == 0  ){
		if ( year % 100 != 0 || year % 400 == 0){
			printf ("Result = 366");
		}
		else {
			printf ("Result = 365");
		}
		
	}
	else 
	printf ("Result = 365");
	getch ();

}
