#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input positive integer number N (N>0) \n");
	int N, K=1, SquareK;
	scanf("%i", &N);
	while(1)
	{
		++K;
		SquareK = K*K;
		if(SquareK>N) break;
	}
	printf("The greatest number K, the square of which exceeds N - %i", K);
	getch();
	return 0;
}
