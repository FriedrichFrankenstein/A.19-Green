#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 4

void fullArray(int arr[M][N]){
	int i, j;
	
	srand(time(NULL));
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			arr[i][j] = rand()%10;
		}
	}
}
void printArray(int arr[M][N]){
	int i, j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%i ", arr[i][j]);
		}
	printf("\n");
	}
}
void findMinMaxInRow(int arr[M][N]){
	int i, j, numMin=0, altArr[N]={};
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			if(arr[i][j] < arr[i][numMin]) numMin = j;	
		}
		printf("Minimal value is %i in row %i \n", arr[i][numMin], numMin+1);
		altArr[i] = arr[i][numMin];
	}
	int numMax=0;
	for(i=0; i<M; i++){
		if(altArr[i] > altArr[numMax]) numMax = i;
	}
	printf("\nMaximum value though %i minimals is %i \n", M, altArr[numMax]);
	printf("\n");
}




int main(){
	int array[M][N];
	fullArray(array);
	printArray(array);
	findMinMaxInRow(array);
	
	getch();
	return 0;
}
