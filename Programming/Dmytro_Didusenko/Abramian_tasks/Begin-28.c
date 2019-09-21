#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Enter A value and press Enter \n");
	int num_a;
	scanf("%i", &num_a);
	int a_2 = num_a * num_a;
	int a_3 = num_a * a_2;
	int a_5 = a_2 * a_3;
	int a_10 = a_5 * a_5;
	int a_15 = a_10 * a_5;
	printf("Results: A2 = %i; A3 = %i; A5 = %i; A10 = %i; A15 = %i \n", a_2, a_3, a_5, a_10, a_15);
	getch();
	return 0;
}
