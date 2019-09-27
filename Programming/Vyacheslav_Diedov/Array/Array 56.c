
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, i, i1=0, n, b;
    srand(time(NULL));
    printf("Input n-");
    scanf("%i", &n);
    i=n;
    int ma[i], mb[i];
    	for(i=0; i<n; i++){
    		a=rand()%100;
    		ma[i]=a;
    		printf("Array a-%i\n",ma[i]);
		}
		for(i=0; i<n; i++){
			for(; ma[i]%3==0;){
				mb[i1]=ma[i];
				printf("Multiple of three=%i\n", mb[i1]);
				++i1;
				break;
			}
		}
		printf("The size of the array= %i", i1);
}
