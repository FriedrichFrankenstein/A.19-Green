#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, A[5]={1, 2, 3, 4, 5}, B[5]={6, 7, 8, 9, 10}, C[10]={};
	printf("Array A[5] - ");
	for(i=0; i<5; i++)
	{
		printf("%i ", A[i]);
	}
	printf("\nArray B[5] - ");
	for(i=0; i<5; i++)
	{
		printf("%i ", B[i]);
	}
	if(A[4] < B[0]) 
	{
		for(i=0; i<5; i++)
		{
			C[i] = A[i];
		}
		for(i=0; i<10; i++)
		{
		C[i+5] = B[i];
		}
	}
	else
	{
		for(i=0; i<5; i++)
		{
			C[i] = B[i];
		}
		for(i=0; i<10; i++)
		{
		C[i+5] = A[i];
		}	
	}
	printf("\nArray C[10] - ");
	for(j=0; j<10; j++)
	{
		printf("%i ", C[j]);
	}
	getch();
	return 0;
}
