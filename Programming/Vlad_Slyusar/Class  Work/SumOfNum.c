#include <stdio.h>
#include <conio.h>
#include <math.h>

void sumofNum ( int num){
    int i, sum = 0;
    for (i = 1; 0 < num; i++){
		sum += num %10;
		num /= 10;
	}
	printf ("Fact = %i", sum);
}
int main ()
{
	int i, factorial = 1,number ;
	printf ("Enter number: ");
	scanf  ("%i", &number);
    sumofNum(number);
	getchar();
	return 0;
}
