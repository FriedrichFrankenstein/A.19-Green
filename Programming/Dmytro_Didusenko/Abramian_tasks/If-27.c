#include <stdio.h>
#include <conio.h>
main()
{
	printf("Input float pointed X value and press Enter button \n");

	float x;
	int xi;
	scanf("%f", &x);
	xi = (int)x; //Приведення до типу int
	if (x < 0) 
	{
		printf("f(x) = 0");
	}
	else
	{
		if (xi%2==0) 
		{
		printf("f(x) = 1");
		}
		else 
		{ 
		printf("f(x) = -1");
		}
	}
	getch();
}
