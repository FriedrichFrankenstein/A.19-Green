#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int* hp;
	int n, i;
	printf("Imput m= ");
	scanf("%i", &n);
	hp = (int*)malloc(n*sizeof(int*));
	
	for(i = 0; i < n; i++){
		*hp = rand()%100;
		printf("P addres[%i]=%i,\nP number=%i\n", i, hp, *hp);
		*hp++;
	}
	
	hp = hp - n;
	
	
	
	return 0;
	}
