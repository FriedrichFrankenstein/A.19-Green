
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
    int n, i, a;
    n = rand()%5+10;
    int ma[ n ] ;
    for(i=0; i<n; i++ ){
    	a=rand()%10;
    	ma[i]=a;
    	printf("ma[%i]=%i\n", i, ma[i]);
	}
	float mb[n], b;
	for(i=0; i<n; i++){
		if (ma[i]<5){
			b=2*ma[i];
			mb[i]=b;
		}else{
			b=(float)ma[i]/2;
			mb[i]=b;
		}
		printf("mb[%i]=%.2f\n", i, mb[i]);
	}
    return 0;
}
