
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i, counter=0;
	int array[N];
	
	srand(time(NULL));
	for(i=0; i < N; i++)
	{
		array[i] = rand()%11;
	}
	for(i=0; i < N; i++) 
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=0; i < N; i++)
	{
		if(i == N-1) break;
		if(array[i] > array[i+1])
		{
			printf("%i ", array[i+1]);
			counter++;
		}
	}
	printf("\nTotal amount - %i", counter);
	
	getch();
	return 0;
}
