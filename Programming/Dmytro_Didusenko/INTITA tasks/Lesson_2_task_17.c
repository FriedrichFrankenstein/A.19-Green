#include <stdio.h>
#include <stdio.h>
#include <time.h>

void fillArray(int mas[]);
int* func(int mas[]);
void printArray(int mas[]);
void printMatrix(int matrix[][4]);

int main(){
	srand(time(0));
	int array[20];
	
	fillArray(array);
	printArray(array);
	func(array);
	
	return 0;
}

void fillArray(int mas[]){
	int i;
	for(i=0; i<20; i++){
		mas[i] = rand()%10;
	}
}

int* func(int mas[]){
	int i, j, k=0, matr[5][4];
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			matr[i][j] = mas[k];
			k++;
		}
	}
	printMatrix(matr);
	for(i=5-1; i>0; i--){
		for(j=4-1; j>=0; j--){
			matr[i][j] *= matr[i-1][j];
		}
	}
	printMatrix(matr);
	k = 0;
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			mas[k] = matr[i][j];
			k++;
		}
	}
	printArray(mas);
	return mas;
}

void printArray(int mas[]){
	int i;
	for(i=0; i<20; i++){
		printf("%i ", mas[i]);
	}
	printf("\n");
}

void printMatrix(int matrix[][4]){
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

