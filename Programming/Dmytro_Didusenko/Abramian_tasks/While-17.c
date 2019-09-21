#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input integer number N (N>0) \n");
	int N, N1;
	scanf("%i", &N);
	
	while(N > 0) 
	{
		N1 = N % 10;
		N /= 10;
		printf("%i", N1);
	}
	getch();
	return 0;
}


