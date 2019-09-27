#include <conio.h>
#include <stdio.h>

int main ()
{
	int number1,number2;
	scanf("%i",&number1);
	if (number1>=0)
	{
		if (number1==0)
		printf("10");
		else
		{
	number2=number1+1;
	printf("%i",number2);
	}
	}
	else
	{
	number2=number1-2;
	printf("%i",number2);
	}
	return 0;
	getch();
}
