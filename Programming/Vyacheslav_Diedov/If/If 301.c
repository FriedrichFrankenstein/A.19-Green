#include <conio.h>
#include <stdio.h>
int main ()
{
	int x;
	printf("x=");
	scanf("%i",&x);
	if(x==0)
	{
	printf("нульове");
	}
	else
	{
		if (x>0)
		{
			if(x%2==0)
			{
			printf("плюсове чотне число");
			}
			else
			{
			printf("плюсове нечотне число");
			}
		}else
		{
		if(x<0)
		{
		if(x%2==0)
			{
			printf("мінусове чотне число");
			}
			else
			{
			printf("мінусове нечотне число");
			}
		}
		}
		}
	return 0;
	getch();
}
