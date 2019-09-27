#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i, n, a, max=0, min=0;
    n=rand()%20;
	int ma[n];
	
	for(i=0; i<n; i++){
		ma[i]=rand()%100;
		printf("ma[%i]=%i\n", i, ma[i]);
	}		
	
	for(i=0; i<n; i++){
		if(ma[min]>ma[i]){
			max = i;
		}
		if(ma[max]<ma[i]){
			min = i;
		}
	}
		max=a;
		ma[max] = ma[min];
		ma[min]=a;
		
		for(i=0; i<n; i++){
			printf("ma[%i]=%i\n", i, ma[i]);
		}
    return 0;
}
