#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, i, n, k=0;
    srand(time(NULL));
    printf("Input n-");
    scanf("%i", &n);
    i=n;
    int nm[i];
    	for(i=0; i<=n; i++){
    		a=rand()%100;
    		nm[i]=a;
    		printf("%i\n",nm[i]);
		}
		for(i=0;i<=n;i++){
			if(nm[i]>nm[i-1]){
				printf("mn[i]=%i\n", nm[i]);
				k++;
			}
		}
		printf("k=%i", k);
    return 0;
}
