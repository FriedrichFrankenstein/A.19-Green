#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

int main()
{
	int i, j=0, A[N], num = (N-1)/3, B[num];
	
	srand(time(NULL));
	for(i=0; i<N; i++)
	{
		A[i] = -10 + rand()%21;
	}
	printf("Array A[%i]: ", N);
	for(i=0; i<N; i++)
	{
		printf("%i ", A[i]);
	}
	printf("\n");
	for(i=3; i<N; i += 3)
	{
		B[j] = A[i];
		j++;
	}
	printf("Number of elements of array B[%i] - %i\n", num, j);
	printf("Array B[%i]: ", num);
	for(j=0; j<num; j++)
	{
		printf("%i ", B[j]);
	}
	getch();
	return 0;
}
