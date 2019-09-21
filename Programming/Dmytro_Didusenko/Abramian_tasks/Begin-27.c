#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Enter A \n");
	int a;
	scanf("%i", &a);
	int a_2 = a * a;
	int a_4 = a_2 * a_2;
	int a_8 = a_4 * a_4;
	printf("Results: A2 = %i; A4 = %i; A8 = %i \n", a_2, a_4, a_8);
	getch();
	return 0;
}
