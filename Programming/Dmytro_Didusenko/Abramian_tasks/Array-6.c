#include <stdio.h>
#include <conio.h>
#define N 10

int main()
{
	int i, numA, numB, array[N];
	
	printf("Input number A: ");
	scanf("%i", &numA);
	printf("Input number B: ");
	scanf("%i", &numB);
	
	array[0] = numA;
	array[1] = numB;
	for(i=2; i<N; i++)
	{
		array[i] = array[i-1] + array[i-2];
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	getch();
	return 0;
}
