#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 7

int main(){
	int i, j, k, arr[N][N]; 
	//srand(time(0));
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
	for(k=0; k<N; k++){
		for(i=k; i<=N-1-k; i++) printf("%i ", arr[k][i]);
		for(i=k+1; i<=N-1-k; i++) printf("%i ", arr[i][N-1-k]);
		for(i=N-2-k; i>=0+k; i--) printf("%i ", arr[N-1-k][i]);
		for(i=N-2-k; i>0+k; i--) printf("%i ", arr[i][k]);
	}
	getch();
	return 0;
}
