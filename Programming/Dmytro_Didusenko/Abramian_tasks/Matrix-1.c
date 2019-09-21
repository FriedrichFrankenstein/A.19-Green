#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 7

int main(){
	
	int i, j, array[M][N];
	
	srand(time(NULL));
	
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			array[i][j] = rand()%10;
		}
	}
	for(i=0; i<M; i++){
		array[i][0] *= 10;
	}
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%i ", array[i][j]);
		}
		printf("\n");	
	}
	getch();
	return 0;
}
