#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i=5, a, n;
    srand(time(NULL));
    printf("Input n-");
    scanf("%i", &n);
    int nm[i];
    	for(i=0; i<=n; i++){
    		a=-50+rand()%100;
    		nm[i]=a;
    		printf("%i\n",nm[i]);
		}
		for(i=0;i<=n;i++){
			if(nm[i]>0){
				a=1;break;
			}
		}
		if (a==1){
			printf("True");
		}else{
			printf("False");
		}
    return 0;
}
