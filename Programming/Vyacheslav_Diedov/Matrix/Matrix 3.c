#include <stdio.h>
#include <conio.h>


int main()
{
int m, n, i, j, a, b;
	printf("M:");
	scanf("%i",&m);
	printf("N:");
	scanf("%i", &n);
int masiv[m][n];
for(i=0; i==0; i++){
	for(j=1; j<=n; j++){
		masiv[i][j]=j;
		printf("%i ", masiv[i][j]);
	}
	printf("\n");
}
for(i=2; i<=m; i++){
	a=i;
	b=1;
	for(j=1; j<=n; j++){
		if(a<=n){
			masiv[i][j]=a++;
		}else{
		masiv[i][j]=b++;	
		}
		printf("%i ", masiv[i][j]);
	}
	printf("\n");
}
return 0;
}
