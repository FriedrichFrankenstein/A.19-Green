#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
#define N 10

int main()
{
	int i, counter=0;
	int array[N];
	/*
	srand(time(NULL));
	for(i=0; i < N; i++)
	{
		array[i] = -10 + rand()%21;
	}
	*/
	
	printf("Input numbers \n");
	for(i=0; i < N; i++)
	{
		scanf("%i", &array[i]);
	}
	
	printf("\n");
	for(i=0; i < N; i++) 
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=0; i < N; i++)
	{
		if(array[i] > 0) 
		{
			counter++;
		}
	}
	if(counter > 0)
	{
		printf("\nTRUE");
	}
	else
	{
		printf("\nFALSE");
	}
	getch();
	return 0;
}
