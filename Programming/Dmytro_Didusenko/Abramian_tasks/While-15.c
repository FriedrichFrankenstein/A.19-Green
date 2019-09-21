#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("Input percent value P (0<P<25) \n");
	int K=0; 
	float P, S;
	scanf("%f", &P);
	while(S <= 1100)
	{
		K++;
		S = 1000 * pow((1+P/100), K);
	}	 
	printf("Deposit amount - %g and number of months - %i \n", S, K);
	
	getch();
	return 0;
}
