#include <stdio.h>

int main(){
	int m, n, d, i, j, s;
	printf("N:");
	scanf("%i", &n);
	printf("M:");
	scanf("%i", &m);
	printf("D:");
	scanf("%i", &d);
	int matrix[m][n];
	
	for(i=0; i<m; i++){
		for(j=0; j<=0; j++){
			matrix[i][j]=i+1;
			}
	}
	
	for(i=0; i<m; i++){
		for(j=1; j<n; j++){
			matrix[i][j]=matrix[i][j-1]+d;
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
