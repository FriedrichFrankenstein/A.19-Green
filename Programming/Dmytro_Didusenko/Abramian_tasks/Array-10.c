#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i, array[N];
	
	srand(time(NULL));
	
	for(i=0; i<N; i++)
	{
		array[i] = 1 + rand()%10;
	}
	printf("Default array: ");
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\nChanged array: ");
	for(i=0; i<N; i++)
	{
		if(array[i]%2 == 0) printf("%i ", array[i]);
	}	
	for(i=N-1; i>=0; i--)
	{
		if(array[i]%2!= 0) printf("%i ", array[i]);
	}
	getch();
	return 0;
}
