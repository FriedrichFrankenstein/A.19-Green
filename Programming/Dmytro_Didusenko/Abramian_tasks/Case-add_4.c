#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Input amount of years \n");
	int years, salary;
	scanf("%i", &years);
	
	switch(years)
	{
		case 0 ... 5: salary = 50; break;
		case 6 ... 15: salary = 100; break;
		case 16 ... 30: salary = 100 + (years-15)*10; break;
		default: salary = 300;
	}
	printf("Your salary - %i $", salary);
	getch();
	return 0;
}
