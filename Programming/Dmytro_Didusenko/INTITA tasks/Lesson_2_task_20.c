#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 4
#define N 5

void fillMatrix(int matr[][N]);
void checkInput(int* row, int* col);
void func(int matr[][N], int row, int col);
void changeRowsAndColomns(int matr[][N], int size, int row, int col);
void printMatrix(int matrix[][N]);

int main(){
	srand(time(0));
	int matrix[M][N], row, col;
	
	checkInput(&row, &col);
	printf("\n");
	fillMatrix(matrix);
	printMatrix(matrix);
	func(matrix, row, col);
	printMatrix(matrix);
	
	return 0;
}

void fillMatrix(int matr[][N]){
	int i, j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			matr[i][j] = 10 + rand()%90;
		}
	}
}
void checkInput(int* row, int* col){
	do{
		printf("Input row number\n");
		scanf("%i", row);
		printf("Input colomn number\n");
		scanf("%i", col);		
		
		if(*row <= M && *col <= N){
			break;
		} 
		else{
			printf("Wrong input. Try again\n\n");
		}
	}while(1);
}

void func(int matr[][N], int row, int col){
	int i, j, size;
	if(M == N){
		size = M;
		
		changeRowsAndColomns(matr, size, row, col);
	}
	else{
		if(M > N) size = N;
		else size = M;
		
		changeRowsAndColomns(matr, size, row, col);
	}
}

void changeRowsAndColomns(int matr[][N], int size, int row, int col){
	int i, temp;
	for(i=0; i<size; i++){
		if(i != row && i != col){
			temp = matr[row][i];
			matr[row][i] = matr[i][col];
			matr[i][col] = temp;				
		}
	}
}

void printMatrix(int matrix[][N]){
	int i, j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
