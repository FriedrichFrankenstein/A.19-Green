#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input integer number N (N>0) \n");
	int N, N1, counter=0, Sum=0;
	scanf("%i", &N);
	
	while(N > 0) 
	{
		N1 = N % 10;
		N /= 10;
		counter++;
		Sum += N1;
	}
	printf("Amount of digits - %i, sum of digits - %i \n", counter, Sum);
	
	getch();
	return 0;
}


