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
	else if ( x >= y && x < ++y){
		x = 1;
	}
	else if ( x >= ++y && x < 2+y){
		x = -1;
	}
	printf ("x = %f", x); 
	getch ();
	return 0;
}
