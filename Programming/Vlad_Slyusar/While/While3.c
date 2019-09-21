#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
	int Number, Koef, counter = 0, rest = 0;
	int Number1 , Koef1 ;
	printf ("Enter 2 numbers: ");
	scanf ("%i%i", &Number, &Koef);
	Number1 = Number;
	Koef1 = Koef;
	while (Number >= 0){
		Number -= Koef;
		counter++;
	}
	while (Number1 > 0){
		rest = (Number1 -= Koef1);
		printf("rest = %i\n", rest);
		if (Number1 < 0){
            rest += 5;
		}
	}

	counter--;
	printf ("Result: %i, Rest: %i", counter, rest);
	getch ();
	return 0;
}
