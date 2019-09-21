#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input time value (number of seconds) \n");
	int seconds, restOfSeconds;
	scanf("%i", &seconds);
	restOfSeconds = seconds % 3600;
	printf("Rest of seconds, left after the last hour - %i", restOfSeconds);
	getch();
	return 0;
}
