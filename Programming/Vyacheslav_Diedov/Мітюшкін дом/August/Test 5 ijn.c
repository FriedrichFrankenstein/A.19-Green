//Task 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void cows ( int G, int* b, int* c, int* t );

int main(){
	int G, b, c, t;
	printf("Input Maney G - ");
	scanf("%i", &G);
	cows ( G, &b, &c, &t );
}

void cows ( int G, int* b, int* c, int* t ){
	int i, j, n;
	int temp = G, count = 0;
	*b = 0;
	for ( i = 0; i <= 100; i++ ){
		for ( j = 0; j <= 100; j++ ){
			for ( n = 0; n <= 100; n++ ){
				temp = temp - ( n * 500 ) - ( j * 5000 ) - ( i * 10000 );
				if(( i + j + n) == 100 && temp == 0 ){
			//	printf("I = %i, J = %i, N = %i\n", i, j, n);
				
				(*c) = j; 
				(*t) = n;
				}
				temp = G;
			} 
		}	
	}
}


