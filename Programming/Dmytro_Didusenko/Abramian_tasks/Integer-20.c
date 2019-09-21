#include <stdio.h>
#include <conio.h>
int main()
{
	int seconds, hours;
	printf("Input time value (number of seconds) \n");
	scanf("%i", &seconds);
	hours = seconds / 3600;
	printf("Number of full hours - %i", hours);
	getch();
	return 0;
}
