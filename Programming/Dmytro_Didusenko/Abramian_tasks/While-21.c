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
		if(N1 % 2 == 0) counter++;
	}
	if(counter > 0) printf("FALSE \n");
	else printf("TRUE \n");
	
	getch();
	return 0;
}


