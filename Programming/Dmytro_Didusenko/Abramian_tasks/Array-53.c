#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i;
	int A[N], B[N], C[N];
	
	srand(time(NULL));
	for(i=0; i < N; i++)
	{
		A[i] = rand()%101;
		B[i] = rand()%101;
	}
	for(i=0; i < N; i++) 
	{
		printf("%i ", A[i]);
	}
	printf("\n");
	for(i=0; i < N; i++) 
	{
		printf("%i ", B[i]);
	}
	for(i=0; i < N; i++)
	{
		if(A[i]>B[i]) C[i] = A[i];
		else C[i] = B[i];
	}
	printf("\n\n");	
	for(i=0; i < N; i++) 
	{
		printf("%i ", C[i]);
	}
	getch();
	return 0;
}
