#include <stdio.h>
#include <conio.h>

float calc(float A, float B, int op){
	float result;
	switch(op){
		case 1: result = A - B; break;
		case 2: result = A * B; break;
		case 3: result = A / B; break;
		default: result = A + B;
	}
	return result;
}
int main(){
	float A, B;
	int op;
	printf("Input two float pointed numbers and number of operation to do: \n");
	printf("1 - difference \n2 - multiplication \n3 - division \nany other number - summa\n");
	scanf("%f%f%i", &A, &B, &op);
	
	float res = calc(A, B, op);
	printf("Result = %.2f \n", res);
	
	getch();
	return 0;
}
