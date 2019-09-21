#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, i, N=0;
	printf("Input two integer numbers A and B (A < B) \n");
	scanf("%i%i", &A, &B);
	for(i = A+1; i < B; i++)
	{
		printf("%i ", i);
		N++;	
	}
	printf("\nTotal amount of numbers - N = %i \n", N);
	
	getch();
	return 0;
}
