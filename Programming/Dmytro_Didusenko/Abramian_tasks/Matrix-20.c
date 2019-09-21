#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 4

int main(){
	
	int i, j, k, arr[M][N], sumArr[N];
	
	srand(time(NULL));
	for(i = 0; i < M; i++){
    	for(j=0; j<N; j++){
    		arr[i][j] = rand()%10;	
    	}
	}
	for(i=0; i<N; i++){
		sumArr[i] = 1;
	}
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%i  ", arr[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			//sumArr[i] = 1;
			sumArr[i] *= arr[j][i];	
		}
	}
	for(i=0; i<N; i++){
		printf("%i ", sumArr[i]);
	}
	printf("\n");	
	getch();
	return 0;
}
