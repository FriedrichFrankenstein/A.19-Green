#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Using keyboard, enter three integer numbers A, B, C and press Enter button \n");
	int num_a, num_b, num_c;
	scanf("%i%i%i", &num_a,&num_b,&num_c);
	printf("Entered numbers - A = %i, B = %i, C = %i \n", num_a, num_b, num_c);
	int num_intermediate = num_b;
	num_b = num_c;
	num_c = num_a;
	num_a = num_intermediate;
	printf("Changed numbers - A = %i, B = %i, C = %i \n", num_a, num_b, num_c);
	getch();
	return 0;
}
