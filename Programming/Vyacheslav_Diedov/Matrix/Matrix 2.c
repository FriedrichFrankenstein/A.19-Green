#include <stdio.h>
#include <conio.h>


int main()
{
int m, n, i, j;
	printf("M:");
	scanf("%i",&m);
	printf("N:");
	scanf("%i", &n);
int masiv[m][n];
for(i=1; i<=m; i++){
	for(j=0; j<n; j++){
		masiv[i][j]=5*j;
		printf("%i ", masiv[i][j]);
	}
	printf("\n");
}
return 0;
}
