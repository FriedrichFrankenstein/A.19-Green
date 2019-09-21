#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	printf("Enter X value end press Enter button \n");
	int x, y;
	scanf("%i", &x);
	y = 4*pow((x - 3), 6) - 7*pow((x - 3), 3) + 2;
	printf("Result: Y = %i \n", y);
	getch();
	return 0;
}
