#include <stdio.h>
#include <conio.h>

int sumRange(int A, int B){
	int sum=0;
	if(A>B) return 0;
	while(A<=B){
		sum += A;
		A++;
	}
	return sum;
}
int main(){
	int A, B, C;
	printf("Input three integer numbers \n");
	scanf("%i%i%i", &A, &B, &C);
	int resAB = sumRange(A, B);
	int resBC = sumRange(B, C);
	printf("Sum = %i \n", resAB);
	printf("Sum = %i \n", resBC);
	getch();
	return 0;
}
