#include <conio.h>
#include <stdio.h>
#include <math.h>

int main ()
{

	int a,b,c;
	scanf("%i%i%i",&a,&b,&c);
	int desc=(b*b)-4*a*c;
	//float x1=(-b+f(desc))/(2*a);
	//float x1=(-b-f(desc))/(2*a);
	float x1=(float)(-b+sqrtl(desc))/(2*a);
	float x2=(float)(-b-sqrtl(desc))/(2*a);
	
	printf("%.1f",x1);
	printf("%.1f",x1);
	return 0;
	getch();	
	
}
