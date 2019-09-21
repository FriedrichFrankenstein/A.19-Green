#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	printf("Input X value and press Enter button \n");
	int x, y;
	scanf("%i", &x);
	y = 3*pow(x, 6) - 6*pow(x, 2) - 7;
	printf("Result: Y = %i \n", y); 
	getch();
	return 0;
}
