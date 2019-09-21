#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int m, n, i, j, k;
	printf("N:");
	scanf("%i", &n);
	printf("M:");
	scanf("%i", &m);
	printf("K:");
	scanf("%i", &k);
	int matrix[m][n];
	
	for ( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < m ; j ++){
			matrix[i][j] = rand()%100;
			printf("%i ", matrix[i][j]);
		}
	printf("\n");
	}
	printf ("K=");
	for ( i = k ; i <= k ; i++){
		for ( j = 0 ; j < m ; j++){
			printf("%i ", matrix[i-1][j]);
		}
		printf("\n");
	}
	return 0;
}
	
