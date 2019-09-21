#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 25

void initArray(int arr[]);
void printArray(int arr[]);
int NumNum(int arr[], int numToFind, int i);

int main(){
	srand(time(0));
	
	int array[20], numToFind, i=0;
	initArray(array);
	printArray(array);
	printf("Input numer to find\n");
	scanf("%i", &numToFind);
	int result = NumNum(array, numToFind, i);
	printf("Number %i meets %i times", numToFind, result);
	
	return 0;
}

void initArray(int arr[]){
	int i;
	for(i=0; i<N; i++){
		arr[i] = rand()%21;
	}	
}

void printArray(int arr[]){
	int i;
	for(i=0; i<N; i++){
		printf("%i ", arr[i]);
	}
	printf("\n");
}

int NumNum(int arr[], int num, int i){
	if(i == N){
		return 0;
	}		
	if(arr[i] == num){
		return 1 + NumNum(arr, num, ++i);
	}
	return NumNum(arr, num, ++i);
}
