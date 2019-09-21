#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
//#define N 10

int main()
{
	int N;
	printf("Input number of elements of arrays: ");
	scanf("%i", &N);
	int i, A[N], B[N];
	srand(time(NULL));
	for(i=0; i<N; i++)
	{
		A[i] = rand()%11;
	}
	printf("Array A[%i]: ", N);
	for(i=0; i<N; i++)
	{
		printf("%i ", A[i]);
	}
	for(i=0; i<N; i++)
	{
		B[i] = A[i] + (i+1);
	}
	printf("\nArray B[%i]: ", N);
	for(i=0; i<N; i++)
	{
		printf("%i ", B[i]);
	}
	getch();
	return 0;
}
