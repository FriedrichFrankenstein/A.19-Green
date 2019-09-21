#include <stdio.h>
#include <stdio.h>
#include <time.h>

void fillArray(int mas[]);
int func(int arr[]);
void printArray(int mas[]);
void printMatrix(int matrix[][5]);

int main(){
	srand(time(0));
	int array[20];
	
	fillArray(array);
	printArray(array);
	
	printf("Max element = %i\n", func(array));
	
	return 0;
}

void fillArray(int mas[]){
	int i;
	for(i=0; i<20; i++){
		mas[i] = rand()%51;
	}
}

int func(int arr[]){
	int i, j, k=0, matr[4][5], maxI = 0, maxJ = 0, max;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			matr[i][j] = arr[k];
			k++;
		}
	}
	printMatrix(matr);
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(matr[i][j] > matr[maxI][maxJ]){
				maxI = i;
				maxJ = j;
			}
		}
	}
	return matr[maxI][maxJ];
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

