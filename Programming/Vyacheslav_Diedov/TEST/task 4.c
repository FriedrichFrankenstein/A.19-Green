#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j, n;
    	srand(time(NULL));
    	a=2+rand()%10;
    	b=2+rand()%10;
    int matr[a][b];
    	for(i=0; i<a; i++){
    		for(j=0; j<b; j++){
    			matr[i][j]= rand()%10;
    			printf("%i ", matr [i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(i=a-1; i>0; i--){
			for(j=0; j<b; j++){
				matr[i][j] *= matr[i-1][j];
			}
		}
			for(i=0; i<a; i++){
				for(j=0; j<b; j++){
					printf("%i   ", matr[i][j]);
			}
			printf("\n");
		}
    return 0;
}
