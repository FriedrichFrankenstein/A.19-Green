#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
	int i, array[N];
	
	srand(time(NULL));
	for(i=0; i<N; i++)
	{
		array[i] = rand()%11;
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	printf("\n");
	for(i=N-1; i>=0; i -= 2)
	{
		printf("%i ", array[i]);
	}
	getch();
	return 0;
}
