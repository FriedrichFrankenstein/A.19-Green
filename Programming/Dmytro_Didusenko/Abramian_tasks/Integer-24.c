#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Enter the number of day (between 1 and 365) and press Enter button \n");
	int dayOfWeek, dayOfYear;
	scanf("%i", &dayOfYear);
	dayOfWeek = dayOfYear % 7;
	printf("Number of the day of the week - %i, \nwhere: \nSunday - 0 \nMonday - 1 \nTuesday - 2 \nWednesday - 3 \nThursday - 4 \nFriday - 5 \nSaturday - 6 \n", dayOfWeek);
	getch();
	return 0; 
}
