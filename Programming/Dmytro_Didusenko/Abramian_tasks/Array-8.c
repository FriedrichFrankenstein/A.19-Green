#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i, counter=0, array[N];
	
	srand(time(NULL));
	
	for(i=0; i<N; i++)
	{
		array[i] = rand()%10;
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=0; i<N; i++)
	{
		if(array[i]%2 != 0)
		{
			printf("%i ", array[i]);
			counter++;
		}
	}
	printf("\nNumber of digits: %i \n", counter);
	getch();
	return 0;
}
