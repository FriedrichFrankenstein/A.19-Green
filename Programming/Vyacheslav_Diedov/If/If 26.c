#include <conio.h>
#include <stdio.h>

 float main ()
{
	float fx,x;
	printf("x=");
	scanf("%f",&x);
	if(x<=0 || x>=2)
	{
		if(x<=0)
		{
		x=x;
		}
		else
		x=4;
	}
	else 
	x=x*x;
	printf("x=%f",x);
	
	return 0;
	getch();
}
