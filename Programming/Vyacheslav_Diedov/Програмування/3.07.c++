#include <stdio.h>

int Mul(int &x, int &y);

int main(){
	int a, b, c;
	printf ( "Input a = " );
	scanf ("%i", &a);
	printf ( "Input b = " );
	scanf ("%i", &b);
	c = Mul(a, b);
	printf("\nc = a + b = %i + %i = %i", a, b, c);
	return 0;
}

int Mul(int &x, int &y){
	x++, y++;
	int c;
	c = x + y;
	return c;
}
