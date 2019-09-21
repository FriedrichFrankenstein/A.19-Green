#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input integer number N (N>0) and press Enter button \n");
	int N, K=0, Sum=0;
	scanf("%i", &N);
	if (N <= 0) printf("Wrong input. Try again \n");
	else
	{
		//do
		while(1)
		{
			K++;
			Sum += K;
			if(Sum >= N) break;
		}
		//while (Sum >= N);
		printf("The smallest number %i, for which sum %i >= %i", K, Sum, N);
	}	
	getch();
	return 0;
}

