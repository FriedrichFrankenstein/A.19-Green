#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input two positive integer numbers N and K \n");
	int N, K, counter=0;
	scanf("%i%i", &N, &K);
	while(N>K)
	{
		N -= K;
		counter++;
	}
	printf("Quotient from division two numbers - %i, \nremainder of the division - %i", counter, N);
	
	getch();
	return 0;
}
