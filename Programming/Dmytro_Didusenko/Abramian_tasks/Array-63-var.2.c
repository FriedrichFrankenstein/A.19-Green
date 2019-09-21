#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, A[5]={0, 2, 5, 8, 11}, B[5]={3, 4, 6, 7, 15}, C[10]={}, ai=0, bi=0;
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
	for(j=0; j<10; j++)
	{
		if((bi>=5)||(A[ai] < B[bi])&&(ai<5))
		{
			C[j] = A[ai];
			ai++;
		}
		else
		{
			C[j] = B[bi];
			bi++;
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
