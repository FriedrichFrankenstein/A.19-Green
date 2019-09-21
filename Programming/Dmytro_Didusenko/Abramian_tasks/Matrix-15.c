#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define M 5

int main(){
	int i, j, arr[M][M];
	
	srand(time(NULL));
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			arr[i][j] = rand()%10;
		}
	}
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(j=0; j<M; j++){
		printf("%i ", arr[0][j]);
	}
	for(i=1; i<M; i++){
		printf("%i ", arr[i][M-1]);
	}
	for(j=M-1; j>=0; j--){
		printf("%i ", arr[M-1][j]);
	}
	for(i=M-2; i>0; i--){
		printf("%i ", arr[i][0]);
	}
	getch();
	return 0;
}
