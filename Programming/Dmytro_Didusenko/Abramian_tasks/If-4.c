#include <stdio.h>
#include <conio.h>
main()
{
	printf("Enter three various integer numbres and press enter button \n");
	int num1, num2, num3, counter = 0;
	scanf("%i%i%i", &num1, &num2, &num3);
	if (num1 > 0) counter = counter + 1;
	if (num2 > 0) counter = counter + 1;
	if (num3 > 0) counter = counter + 1;
	printf("Quantity of positive integer numbers - %i \n", counter);
	getch();
}
