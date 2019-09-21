#include <stdio.h>
#include <conio.h>

int main()
{
	float N, i, B=1, sum=0;
	printf("Input integer number N (N>0) \n");
	scanf("%f", &N);
	for(i = 1; i <= N; i++)
	{
	B *= i;
	sum += B;		
	}
	printf("Total sum of factorials - %g \n", sum);	
	getch();
	return 0;
}
