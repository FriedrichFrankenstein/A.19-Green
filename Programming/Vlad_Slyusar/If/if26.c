#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float x;
	printf ("Enter value of x: ");
	scanf ("%f", &x);
	if ( x <= 0){
		x = -x;
	}
	else if ( 0 < x && x < 2){
		x = pow(x, 2);
	}
	else {
		x = 4;
	}
	printf ("f(x) = %g", x);
	getch ();
	return 0;
}
