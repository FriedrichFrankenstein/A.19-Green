#include <conio.h>
#include <stdio.h>

main ()
{
	float x;
	int xi;
	printf("x=");
	scanf("%f",&x);
	xi=(int)x;

	if(x<0)
	{
	printf("f(x=0)");
		}
		else{ 
		if(xi/2==0)
		{
		printf("f(x)=1");
		}
		else {
			printf("f(x)=-1");
		}
	}

	return 0;
	getch();
}
