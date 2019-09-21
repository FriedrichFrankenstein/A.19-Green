#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 10

int main()
{
	int i, A, D, degree=0, array[N];
	
	printf("Input the first number A: ");
	scanf("%i", &A);
	printf("Input difference number D: ");
	scanf("%i", &D);	
	for(i=0; i<N; i++)
	{
		array[i] = A * pow(D, degree);
		degree++;
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	getch();
	return 0;
}
