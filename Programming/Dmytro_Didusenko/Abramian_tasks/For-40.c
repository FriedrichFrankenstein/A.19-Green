#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, i, j;
	printf("Input two integer numbers A and B (A < B) \n");
	scanf("%i%i", &A, &B);
	for(i = A; i <= B; i++)
	{
		for(j = A; j <= i; j++)
		{
			printf("%i ", i);
		}
		printf("\n");
	}
	getch();
	return 0;
}
