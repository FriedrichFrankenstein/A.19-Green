#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input two integet numbers A and B \n");
	int num_a, num_b, num_intermediate;
	scanf("%i%i", &num_a, &num_b);
	printf("Entered numbers - A = %i and B = %i \n", num_a, num_b);
	num_intermediate = num_a;
	num_a = num_b;
	num_b = num_intermediate;
	printf("Changed numbers - A = %i and B = %i \n", num_a, num_b);
	getch();
	return 0;
}
