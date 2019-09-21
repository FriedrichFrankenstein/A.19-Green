#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int func(int limSum, int* N, int tempSum);
void printArray(int array[], int N);
void fillArray(int array[], int N);

int main(){
	int* sum = NULL;
	int limSum, N=0, tempSum = 0;
	
	printf("Input lim value\n");
	scanf("%i", &limSum);
	
	printf("\n");
	
	printf("\nAmount on elements - %i\n\n", func(limSum, &N, tempSum));
	sum = (int*)calloc(N, sizeof(int));
	
	fillArray(sum, N);
	printArray(sum, N);
	
	return 0;
}

int func(int limSum, int* N, int tempSum){   // void...
	tempSum += *N;
	
	if(tempSum > limSum) return *N;
	
	printf("N = %i,\tSum = %i\n", *N, tempSum);
	(*N)++;
	func(limSum, N, tempSum);
}

void printArray(int array[], int N){
	int i;
	for(i=0; i<N; i++){
		printf("%i ", array[i]);
	}
	printf("\n");
}

void fillArray(int array[], int N){
	int i;
	array[0] = 1;
	for(i=1; i<N; i++){
		array[i] = (i + 1) + array[i-1];
	}
}
