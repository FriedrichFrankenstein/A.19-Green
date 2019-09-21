#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input time value (number of seconds) \n");
	int seconds, minutes;
	scanf("%i", &seconds);
	minutes = seconds / 60;
	printf("Number of full minutes - %i \n", minutes);
	getch();
	return 0;
}
