#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Input integer number of the month \n");
	int month;
	scanf("%i", &month);
	switch (month)
	{
		case 1:
		case 2:
		case 12: printf("Winter"); break;	
		case 3: 
		case 4:
		case 5: printf("Spring"); break;
		case 6: 
		case 7:
		case 8: printf("Summer"); break;
		case 9:
		case 10:
		case 11: printf("Autumn"); break;
		default: printf("You have entered a wrong number");
	}	
	getch();
	return 0;
}
