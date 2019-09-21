
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i, n, a;
    n=rand()%20;
	int ma[n];
	for(i=0; i<n; i++){
		ma[i]=rand()%100;
		printf("ma[%i]=%i\n", i, ma[i]);
	}		
	
	for(i=0; i<n; i++){
		if (ma[i]%2==0){
			a=ma[i];
			printf("%i\n",a);
			break;
		}
	}
	
	for (i=0; i<n; i++){
		if (ma[i]%2==0){
			ma[i]+=a;
		}
		printf("ma[%i]=%i\n", i, ma[i]);
	}
    return 0;
}
