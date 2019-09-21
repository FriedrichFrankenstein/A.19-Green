#include <stdio.h>
#include <conio.h>
#include <math.h>

void fact ( int num){
    int i, factorial = 1;
    for (i = 1; i <= num; i++){
		factorial *= i;
	}
	printf ("Fact = %i", factorial);
}
int main ()
{
	int i, factorial = 1,number ;
	printf ("Enter number: ");
	scanf  ("%i", &number);
	fact(number);
	getchar();
	return 0;
}
