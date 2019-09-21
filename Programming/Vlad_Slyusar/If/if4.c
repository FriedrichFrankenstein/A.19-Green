#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int number1, number2, number3, counterOfPlus = 0;
	printf ("Enter 3 numbers :");
	scanf ("%i%i%i", &number1, &number2, &number3);
			if (number1 > 0){
			counterOfPlus++;
		}
			if (number2 > 0){
			counterOfPlus++;
		}
			if (number3 > 0){
			counterOfPlus++;
		}
	printf ("Result: %i", counterOfPlus);
	
	getch ();
}	
