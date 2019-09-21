//Дано 3 числа. Знайти середнє.
#include <conio.h>
#include <stdio.h>

 int main ()
{
	int a, b, c;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	printf("c=");
	scanf("%i",&c);
	if(a<c)
	{
		if(b<c)
		{
		printf("%i",b);
		}
		else 
		{
			if (a<c)
			{
			printf("%i",c);
			}
			else 
			printf("%i",a);
		}
	}
	else
	{
		if (b>c)
		{
		printf("%i",b);
		}
		else
		{
			if (a<c)
			printf("%i",a);
			else
			printf("%i",c);
		}
	}
	return 0;
	getch();
}
