#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input time value (number of seconds) \n");
	int seconds, restOfSeconds, restOfMinutes;
	scanf("%i", &seconds);
	restOfSeconds = seconds % 3600;
	restOfMinutes = restOfSeconds / 60;
	printf("Rest of minutes, left after the last hour - %i", restOfMinutes);
	getch();
	return 0;
}
