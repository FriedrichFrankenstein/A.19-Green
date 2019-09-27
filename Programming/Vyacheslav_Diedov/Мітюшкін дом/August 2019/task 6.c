//Task 6
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void arrayExtension(int n, int m);

int main(){
	int n, m;
	printf("Imput n: ");
	scanf("%i", &n);
	printf("Input m: ");
	scanf("%i", &m);
	arrayExtension(n, m);
	return 0;
}

void arrayExtension(int n, int m){
	int i, j, temp, maxn ,maxm ,max = 0;	
	srand(time(NULL));
	int arr[n][m];
	for ( i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			arr[i][j] = 10 + rand()% 89;
			if (arr[i][j] > max){
				max = arr[i][j];
				maxn = i;
				maxm = j;
			}
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	printf("max[%i][%i] = %i\n", maxn + 1, maxm + 1, max);
	for( i = 0; i < m; i++){
		temp = arr[0][i];
		arr[0][i] = arr[maxn][i];
		arr[maxn][i] = temp;
	}
	for ( i = 0; i < n; i++){
		temp = arr[i][0];
		arr[i][0] = arr[i][maxm];
		arr[i][maxm] = temp;
	}
	for ( i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
}
