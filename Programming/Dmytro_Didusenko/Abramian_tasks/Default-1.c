#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 6

int main(){
	
	int i, j, arr[N][N];
	srand(time(NULL));
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			arr[i][j] = rand()%10;
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(i == j) printf("%d ", arr[i][j]);
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<N; i++){
		for(j=0; j<=N; j++){
			if((i+j)==(N-1)) printf("%d ", arr[i][j]);
			else printf("  ");		
		}
		printf("\n");
	}
	getch();
	return 0;
}
