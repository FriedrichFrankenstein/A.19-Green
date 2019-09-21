#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
	int i, K, array[N]={};
	
	do
	{
		printf("Input integer number K (1<=K<=N) \n");
		scanf("%i", &K);
		if(K>=1 && K<=N) break;
		else printf("Wrong input. Try again\n\n");
	}
	while(K<1 || K>N);
	
	srand(time(NULL));
	for(i=0; i<N; i++)
	{
		array[i] += i; 
		//rand()%11;
	}
	for(i=K; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=0; i*K<N; i++)
	{
		printf("%i ", array[i*K]);
	}
	getch();
	return 0;
}
