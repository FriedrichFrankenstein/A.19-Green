#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input time value (number of seconds) \n");
	int seconds, restOfSeconds;
	scanf("%i", &seconds);
	restOfSeconds = seconds % 60;
	printf("Rest of seconds, left after the last minute - %i", restOfSeconds);
	getch();
	return 0;
}
