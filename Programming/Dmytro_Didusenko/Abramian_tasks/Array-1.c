#include <stdio.h>
#include <conio.h>
#define N 10

int main()
{
	int i, num=1, array[N];
	
	for(i=0; i<N; i++)
	{
		array[i] = num;
		num +=2;
	}
	for(i=0; i<N; i++)
	{
		printf("%i ", array[i]);
	}
	getch();
	return 0;
}
