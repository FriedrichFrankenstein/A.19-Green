#include <conio.h>
#include <stdio.h>

int positive(int a, int b, int c)
{
	if(a>0)
	{
	a=1;
	}
	else
	a=0;
	if(b>0)
	{
	b=1;
	}
	else
	b=0;
	if(c>0)
	{
	c=1;
	}
	else
	c=0;
	int xPos;
	xPos=a+b+c;
	return xPos;
}

int negative(int a, int b, int c)
{
	if(a<0)
	{
	a=1;
	}
	else
	a=0;
	if(b<0)
	{
	b=1;
	}
	else
	b=0;
	if(c<0)
	{
	c=1;
	}
	else
	c=0;
	int xNeg;
	xNeg=a+b+c;
	return xNeg;
}
int main ()
{
	int a, b, c;
	printf("Enter 3 numbers:\n");
	scanf("%i%i%i",&a,&b,&c);
	int xPos, xNeg;
	xPos= positive (a,b,c);
	xNeg= negative (a,b,c);
	printf("Positive nunber %i\nNegative number %i",xPos,xNeg);
	return 0;
	getch();
}
