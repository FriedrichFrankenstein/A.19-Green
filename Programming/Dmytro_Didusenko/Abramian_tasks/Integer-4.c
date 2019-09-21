#include <stdio.h>
#include <conio.h>
main()
{
	int A, B, Num;
	printf("Input two integer numbers, where (A>B) and press Enter \n");
	scanf("%i%i", &A, &B);
	Num = A / B;
	printf("Number of sections = %i", Num);
	getch();
}
