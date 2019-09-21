#include <stdio.h>
#include <conio.h>

void minMax(int &X, int &Y){
	int alt;
	if(X>Y){
		alt = X;
		X = Y;
		Y = alt;
	}
	printf("Min number - %i \nMax number - %i \n\n", X, Y);
}
int main(){
	int A, B, C, D;
	printf("Input integer numbers A, B, C and D \n");
	scanf("%i%i%i%i", &A, &B, &C, &D);
	
	minMax(A, B);
	minMax(C, D);
	minMax(B, C);
	minMax(A, D);
	
	printf("%i %i %i %i", A, B, C, D);
	
	getch();
	return 0;
}
