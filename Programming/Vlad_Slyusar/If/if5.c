#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int number1, number2, number3, counterOfPlus = 0, counterOfMinus = 0;
	printf ("Enter 3 numbers:");
	scanf ("%i%i%i", &number1, &number2, &number3);
	if (number1 > 0){
		counterOfPlus++;
	}
	else {
		counterOfMinus++;
	}
		if (number2 > 0){
		counterOfPlus++;
	}
	else {
		counterOfMinus++;
	}
		if (number3 > 0){
		counterOfPlus++;
	}
	else {
		counterOfMinus++;
	}
	printf ("Number of Plus: %i; number of minus: %i", counterOfPlus, counterOfMinus);
	
	getch ();
	return 0;
}
