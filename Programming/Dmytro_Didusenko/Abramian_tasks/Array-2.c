#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 10

int main()
{
	int i, array[N];
	
	for(i=1; i<=N; i++)
	{
		array[i] = pow(2, i);
	}
	for(i=1; i<=N; i++)
	{
		printf("%i ", array[i]);
	}
	getch();
	return 0;
}
