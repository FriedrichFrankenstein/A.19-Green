#include <stdio.h>
#include <conio.h>

void swap(int X, int Y){
	int alt;
		alt = X;
		X = Y;
		Y = alt;
	printf("First number - %i \nSecond number - %i \n\n", X ,Y);
}
int main(){
	int A, B, C, D;
	printf("Input integer numbers A, B, C and D \n");
	scanf("%i%i%i%i", &A, &B, &C, &D);
	
	swap(A, B);
	swap(C, D);
	swap(B, C);
	
	getch();
	return 0;
}
