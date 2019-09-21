#include <stdio.h>
#include <math.h>
#include <conio.h>

int myPow (int num){
	int result = num * num;
	return result;
}
int main(){
	int number, result;
	printf ("Enter number: ");
	scanf ("%i", &number);
	result = myPow (number);
	getchar ();
	printf ("Result: %i", result);
	return 0;
}
