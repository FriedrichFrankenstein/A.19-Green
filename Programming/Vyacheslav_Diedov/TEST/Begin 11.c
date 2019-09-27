#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float x ;
	printf ("Enter value of x: ");
	scanf ("%f", &x);
	int y = floor (x);
	printf ("y = %i, x = %f ", y, x);
	if ( x < 0){
		x = 0;
	}
	else if ( y % 2 == 0){
		x = 1;
	}
	else if ( y % 2 != 0){
		x = -1;
	}
	printf ("x = %g", x); 
	getch ();
	return 0;
}
