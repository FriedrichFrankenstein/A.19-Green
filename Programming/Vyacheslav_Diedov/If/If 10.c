#include <conio.h>
#include <stdio.h>

 int main ()
{
	int a, b, a1, b1;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if (a!=b)
	{
	a1=a+b;
	b1=a+b;
	printf("a=%i b=%i",a1,b1);
	}
	else
	{
	a1=0;
	b1=0;
	printf("a=%i b=%i",a1,b1);
}
	return 0;
	getch();
}
