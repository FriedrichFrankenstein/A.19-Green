#include <stdio.h>
#include <conio.h>

void sortInc3(int A, int B, int C){
	int alt;

	if((A<C)&&(C<B)){
		alt = C;
		C = B;
		B = alt;
	} 
	if((B<A)&&(A<C)){
		alt = B;
		B = A;
		A = alt;
	} 
	if((B<C)&&(C<A)){
		alt = A;
		A = B;
		B = C;
		C = alt;
	}
	if((C<A)&&(A<B)){
		alt = A;
		A = C;
		C = B;
		B = alt;
	}
	if((C<B)&&(B<A)){
		alt = A;
		A = C;
		C = alt;
	}
	printf("%i %i %i\n\n", A, B, C);
}
int main(){
	int A, B, C, D;
	printf("Input different integer numbers A, B and C \n");
	scanf("%i%i%i", &A, &B, &C);
	
	sortInc3(A, B, C);
	//sortInc3(A, B, C);
		
	getch();
	return 0;
}
