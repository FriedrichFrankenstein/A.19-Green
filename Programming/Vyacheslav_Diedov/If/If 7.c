#include <conio.h>
#include <stdio.h>

float main ()
{
	float a, b;
	scanf("%f%f",&a,&b);
	if (a>b)
	{
	printf("Min - %.2f",b);
	}
	else
	printf("Min - %.2f",a);
	return 0;
	getch();
}
