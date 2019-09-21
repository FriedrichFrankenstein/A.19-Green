#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i, total=0;
	int array[N];
	
	srand(time(NULL));
	for(i=0; i < N; i++)
	{
		array[i] = rand()%101;
	}
	for(i=0; i < N; i++) 
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=0; i < N; i++)
	{
		if(array[i] % 2 != 0) 
		{
			printf("%i ", i+1);
			total++;
		}
	}
	printf("\nTotal amount - %i", total);
	
	getch();
	return 0;
}
