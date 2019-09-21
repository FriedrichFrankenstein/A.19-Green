#include <stdio.h>
#include <conio.h>

void digitCountSum(int K){
	int C=0, S=0;
	while(K>0){
		S += (K%10);
		K /= 10;
		C++;
	}
	printf("Amount of digits = %i \nSum of digits = %i \n", C, S);
	printf("\n");
}
int main(){
	
	digitCountSum(123);
	digitCountSum(234);
	digitCountSum(2222);
	
	getch();
	return 0;
}
