#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
	int i, j, arr[N], iMin, iMax;
	//srand(time(NULL));
	for(i=0; i<N; i++)
	{
		arr[i] = rand()%11;
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", arr[i]);
	}
	iMin = 0;
	for(i=0; i<N; i++)
	{
		if(arr[i] < arr[iMin]) iMin = i;
	}
	printf("\n%i", arr[iMin]);
	iMax = 0;
	for(i=0; i<N; i++)
	{
		if(arr[i] > arr[iMax]) iMax = i;
	}
	printf("\n%i", arr[iMax]);
	
	
	
	
	
	
	
	getch();
	return 0;
}
