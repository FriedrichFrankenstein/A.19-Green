#include <conio.h>
#include <stdio.h>

int main ()
{
	int a, b, c;
	scanf("%i",&a);
	if(a>0)
	{
	a=1;
	}
	else
	a=0;
	scanf("%i",&b);
	if(b>0)
	{
	b=1;
	}
	else
	b=0;
	scanf("%i",&c);
	if(c>0)
	{
	c=1;
	}
	else
	c=0;
	int x;
	x=a+b+c;
	printf("%i",x);
	return 0;
	getch();
}
