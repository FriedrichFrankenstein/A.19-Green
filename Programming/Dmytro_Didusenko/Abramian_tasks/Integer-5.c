#include <stdio.h>
#include <conio.h>
main()
{
	int A, B, Residual;
	printf("Input two integer numbers, where (A>B) and press Enter \n");
	scanf("%i%i", &A, &B);
	Residual = A % B;
	printf("Residual = %i", Residual);
	getch();
}
