#include <stdio.h>
#include <time.h>
#define N 5
#define M 5

int main(){
	srand(time(NULL));
	int i, j, temp;
	int arr[N][M] = {{10,11,12,13,14},{20,21,22,23,24},{30,31,32,33,34},{40,41,42,43,44},{50,51,52,53,54}};
	for ( i = 0; i < N; i++){
		for( j = 0; j < M; j++){
	//		arr[i][j] = 10 + rand()% 90;
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	int r, s;
	printf("Input line r = ");
	scanf("%i", &r);
	printf("Input column s = ");
	scanf("%i", &s);
	if ( N >= M ){
		for( i = 0; i < M;){
			for ( j = 0; j < M; j++, i++){
				if ((( s-1 ) == i && ( r-1 ) == j) || (( r-1 ) == i && ( r - 1 ) == j ) || (( s - 1 ) == i && ( s - 1 ) == j)){
					i++, j++;
				}
				temp = arr[r-1][j];
				arr[r-1][j] = arr[i][s-1];
				arr[i][s-1] = temp;
			}else{
				for( i = 0; i < N;){
					for ( j = 0; j < N; j++, i++){
						if ((( s-1 ) == i && ( r-1 ) == j) || (( r-1 ) == i && ( r - 1 ) == j ) || (( s - 1 ) == i && ( s - 1 ) == j)){
							i++, j++;
						}
					temp = arr[r-1][j];
					arr[r-1][j] = arr[i][s-1];
					arr[i][s-1] = temp;
			}
		}
	}
	for ( i = 0; i < N; i++){
		for( j = 0; j < M; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

