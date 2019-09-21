#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 7

int main(){
	int i, j, arrAlt[M], array[M][N];
	
	srand(time(NULL));
	for(i=0; i<M; i++){
		arrAlt[i] = rand()%10;
	}
	for(i=0; i<M; i++){
		printf("%i ", arrAlt[i]);
	}
	printf("\n\n");
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			array[i][j] = arrAlt[i];
			printf("%i ", array[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
