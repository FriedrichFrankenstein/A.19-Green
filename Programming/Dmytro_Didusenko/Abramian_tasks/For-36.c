#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float N, K, i, sum=0;
	printf("Input two positive integer numbers N and K \n");
	scanf("%f%f", &N, &K);
	for(i = 1; i <= N; i++)
	{
		sum += pow(i, K);		
	}
	printf("\nTotal sum - %g \n", sum);
	
	getch();
	return 0;
}
