#include <conio.h>
#include <stdio.h>

 double main ()
{
	double a, b, a1, b1;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if (a<b)
	{
	printf("a=%.2d b=%.2d",a,b);
	}
	else
	{
		a1=b;
		b1=a;
	printf("a=%.2d b=%.2d",a1,b1);
}
	return 0;
	getch();
}
