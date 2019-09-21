#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 4

int main(){
	
	int i, j, k, arr[M][N], numMin=0;
	
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
			if(arr[i][j] < arr[i][numMin]) numMin = j;	
		}
		printf("Minimal value in row %i is %i \n", i, arr[i][numMin]);
	}
	printf("\n");	
	getch();
	return 0;
}
