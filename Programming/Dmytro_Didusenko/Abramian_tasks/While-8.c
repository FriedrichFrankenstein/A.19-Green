#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input positive integer number N (N>0) \n");
	int N, SquareK;
	scanf("%i", &N);
	int K = N;
	while(1)
	{
		--K;
		SquareK = K*K;
		if(SquareK<=N) break;
	}
	printf("The greatest number K, the square of which does not exceed N - %i", K);
	getch();
	return 0;
}
