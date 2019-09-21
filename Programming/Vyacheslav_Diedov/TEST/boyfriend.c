#include <conio.h>
#include <stdio.h>

int main()
{
	float x;
	int xi;
	printf("x=");
	scanf("%f",x);
	xi=(int)x;
	if (x=0)
	{
	printf("x-zero");
	}
	else
	{
			if (xi%2==0)
			{
			printf("x-boyfriend");
			}
			else
			printf("x-notboyfriend");
		
			
	}
	
	getch();
	return 0;
}

