#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input date (day and month) and press Enter button \n");
	int day, month, monthTotal;
	scanf("%i%i", &day, &month);
	switch(month)
	{
		case 1: monthTotal = 0; break;
		case 2: monthTotal = 31; break;
		case 3: monthTotal = 31 + 28; break;
		case 4: monthTotal = 31 + 28 + 31; break;
		case 5: monthTotal = 31 + 28 + 31 + 30; break;
		case 6: monthTotal = 31 + 28 + 31 + 30 + 31; break;
		case 7: monthTotal = 31 + 28 + 31 + 30 + 31 + 30; break;
		case 8: monthTotal = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
		case 9: monthTotal = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10: monthTotal = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11: monthTotal = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12: monthTotal = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
	}
	int totalDays = day + monthTotal;
	printf("Total amount - %i days", totalDays);
	getch();
	return 0;
}
