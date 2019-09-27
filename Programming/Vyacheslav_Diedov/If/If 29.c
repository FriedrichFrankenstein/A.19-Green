#include <conio.h>
#include <stdio.h>

main ()
{
	int year;
	printf("year=");
	scanf("%i",&year);
	if(year%4!=0 || year%100==0 && year%400!=0)
	{
		printf("365");
		}
		else
		{
		printf("366");
		}
	return 0;
	getch();
}
