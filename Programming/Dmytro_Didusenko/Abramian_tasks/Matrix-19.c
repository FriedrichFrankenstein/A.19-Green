#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 4

int main(){
	
	int i, j, k, arr[M][N], sumArr[N]={}, maxSum=0;
	
	srand(time(NULL));
	for(i = 0; i < M; i++){
    	for(j=0; j<N; j++){
    		arr[i][j] = rand()%10;	
    	}
	}
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%i  ", arr[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			sumArr[i] += arr[i][j];	
		}
	}
	for(k=0; k<M; k++){
		printf("%i ", sumArr[k]);
	}
	for(k=0; k<M; k++){
		if(sumArr[k] > sumArr[maxSum]) maxSum = k;
	}
	printf("\nMax summa %i is in row %i", sumArr[maxSum], maxSum+1);	
		
	printf("\n");	
	getch();
	return 0;
}
