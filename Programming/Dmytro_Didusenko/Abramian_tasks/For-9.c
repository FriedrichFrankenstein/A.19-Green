#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, i, sum=0;
	printf("Input two integer numbers A and B (A < B) \n");
	scanf("%i%i", &A, &B);
	for(i = A; i <= B; i++)
	{
		sum += i*i;	
	}
	printf("\nSum of squares - %i \n", sum);
	
	getch();
	return 0;
}
