#include <stdio.h>
#include <stdio.h>
#include <time.h>

void fillArray(int mas[]);
int* func(int arr[], int k1, int k2);
void printArray(int mas[]);
void printMatrix(int matrix[][5]);

int main(){
	srand(time(0));
	int array[20], matrix[4][5], k1, k2;
	
	fillArray(array);
	printArray(array);
	func(array, 0, 4);
	printArray(array);
	
	return 0;
}

void fillArray(int mas[]){
	int i;
	for(i=0; i<20; i++){
		mas[i] = rand()%51;
	}
}

int* func(int arr[], int k1, int k2){
	int i, j, matr[4][5], k = 0, temp;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			matr[i][j] = arr[k];
			k++;
		}
	}
	printMatrix(matr);
	for(i=0; i<4; i++){
		temp = matr[i][k1];
		matr[i][k1] = matr[i][k2];
		matr[i][k2] = temp;
	}
	printMatrix(matr);
	k = 0;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			arr[k] = matr[i][j];
			k++;
		}
	}
	return arr;
}

void printArray(int mas[]){
	int i;
	for(i=0; i<20; i++){
		printf("%i ", mas[i]);
	}
	printf("\n");
}

void printMatrix(int matrix[][5]){
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

