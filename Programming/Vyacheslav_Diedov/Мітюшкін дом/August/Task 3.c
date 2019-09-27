//Task 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

void fillingInTheNumbers ( int A[][5], int B[][5], int C[][5] );

void three_matr ( int A[][5], int B[][5], int C[][5] );

void printArrayA ( int A[][5] );

void printArrayB ( int B[][5] );

void printArrayC ( int C[][5] );

int normaArreyA ( int A[][5] );

int normaArreyB ( int B[][5] );

int normaArreyC ( int C[][5] );

int main(){
	int A[5][5] = {};
	int B[5][5] = {};
	int C[5][5] = {};
	fillingInTheNumbers ( A, B, C );
	three_matr ( A, B, C );
	return 0;
}

void fillingInTheNumbers ( int A[][5], int B[][5], int C[][5] ){
	srand ( time ( NULL ));
	int i, j;
	for ( i = 0; i < 5; i++){
		for ( j = 0; j < 5; j++){
			A[i][j] = 99 - rand()% 200;
			B[i][j] = 99 - rand()% 200;
			C[i][j] = 99 - rand()% 200;
		}
	}
}

void printArrayA ( int A[][5] ){
	int i, j;
	printf("Array A\n");
	for ( i = 0; i < 5; i++){
		for ( j = 0; j < 5; j++){
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void printArrayB ( int B[][5] ){	
	int i, j;
	printf("Array B\n");
	for ( i = 0; i < 5; i++){
		for ( j = 0; j < 5; j++){
			printf("%i ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void printArrayC ( int C[][5] ){
	int i, j;
	printf("Array C\n");
	for ( i = 0; i < 5; i++){
		for ( j = 0; j < 5; j++){
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void three_matr ( int A[][5], int B[][5], int C[][5] ){
	printArrayA ( A );
	printArrayB ( B );
	printArrayC ( C );
	int normaA, normaB, normaC;
	normaA = normaArreyA ( A );
	normaB = normaArreyB ( B );
	normaC = normaArreyC ( C );
	printf("\nnormaA = %i\nnormaB = %i\nnormaC = %i\n\nMin norma is in the ", normaA, normaB, normaC );
	if ( normaA < normaB ){
		if ( normaA < normaC){
			printArrayA ( A );
		}else{
			printArrayC ( C );
		}
	}else{
		if ( normaB < normaC ){
			printArrayB ( B );
		}
		else{
			printArrayC ( C );
		}
	}
}

int normaArreyA ( int A[][5] ){
	int i, j, max = 0;
	for ( i = 0; i < 5; i++ ){
		for( j = 0; j < 5; j++ ){
			if ( fabs( A[i][j] ) > fabs( max )){
			max = A[i][j];
			}
		}
	}
	return max;
}

int normaArreyB ( int B[][5] ){
		int i, j, max = 0;
	for ( i = 0; i < 5; i++ ){
		for( j = 0; j < 5; j++ ){
			if ( fabs( B[i][j] ) > fabs( max )){
			max = B[i][j];
			}
		}
	}
	return max;
}

int normaArreyC ( int C[][5] ){
		int i, j, max = 0;
	for ( i = 0; i < 5; i++ ){
		for( j = 0; j < 5; j++ ){
			if ( fabs( C[i][j] ) > fabs( max )){
			max = C[i][j];
			}
		}
	}
	return max;
}

