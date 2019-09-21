#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int number;
	printf ("Enter number:");
	scanf ("%i", &number);
	if ( number >= 0){
		if ( number == 0){
			number = 10;
		}
		else {
			number++;
		}
	}
	else {
		number -= 2;
	}
	printf ("Result: %i", number);
	
	getch();
	return 0;
}
