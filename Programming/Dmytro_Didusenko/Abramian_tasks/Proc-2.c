#include <stdio.h>
#include <conio.h>

void PowerA234(float A){
	float B = A*A;
	float C = B*A;
	float D = C*A;	
	printf("A^2 = %.2f\n", B);
	printf("A^3 = %.2f\n", C);
	printf("A^4 = %.2f\n", D);
	printf("\n");
}

int main(){
	float A;
	//printf("Input A value \n");
	//scanf("%f", &A);
	
	PowerA234(2);
	PowerA234(3);
	PowerA234(4);
	PowerA234(5);
	PowerA234(6);
	
	getch();
	return 0;
}
