
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, i, n, sum=0;
    srand(time(NULL));
    printf("Input n-");
    scanf("%i", &n);
    i=n;
    int ma[i], mb[i];
    	for(i=0; i<n; i++){
    		a=rand()%100;
    		ma[i]=a;
    		printf("ma-%i\n",ma[i]);
		}
		for(i=0; i<n; i++){
			sum+=ma[i];
			mb[i]=sum;
			printf("mb[%i]=%i\n", i, mb[i]);
		}
    return 0;
}
