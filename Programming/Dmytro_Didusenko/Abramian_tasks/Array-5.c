#include <stdio.h>
#include <conio.h>
#define N 20

int main()
{
	int i, arrayFibon[N];
	
	arrayFibon[0] = 1;
	arrayFibon[1] = 1;
	for(i=2; i<N; i++)
	{
		arrayFibon[i] = arrayFibon[i-2] + arrayFibon[i-1];
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", arrayFibon[i]);
	}
	getch();
	return 0;
}
