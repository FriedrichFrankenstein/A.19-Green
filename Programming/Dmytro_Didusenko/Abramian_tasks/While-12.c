#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input integer number N (N>1) and press Enter button \n");
	int N, K, Sum=0;
	scanf("%i", &N);
	if (N <= 0) printf("Wrong input. Try again \n");
	else
	{
		K = N;
		while(1)
		{
			Sum += K;
			K--;
			printf("K = %i, Sum = %i \n", K, Sum);
			if(Sum >= N) break;
		}
		printf("The biggest number %i, for which sum %i <= %i", K, Sum, N);
	}	
	getch();
	return 0;
}
