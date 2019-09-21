#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int numberA, numberB, positionNumber;
	printf ("Enter 2 numbers: ");
	scanf ("%i%i", &numberA, &numberB);
	if (numberA > numberB){
		positionNumber++;
	}
	else{
		positionNumber += 2;
	}
	printf ("Position number max value is %i", positionNumber);
	getch ();
	return 0;
}
