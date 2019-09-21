#include <stdio.h>
#include <conio.h>
main()
{
	int num;
	printf("Enter any integer number and press Enter button \n");
	scanf("%i", &num);
	/*
	if (num > 0)
	{
		num += 1;
	}
	else if (num < 0) 
		{
			num -= 2;
		}
		else 
		{
			num = 10;
		}
		*/
	if (num > 0) num += 1;
	if (num < 0) num -= 2;
	if (num == 0) num = 10;
	printf("Number = %i \n", num);
			
	getch();
}
