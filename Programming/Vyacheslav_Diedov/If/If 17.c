/*Дано три перемінних a,b,c. Якщо їх значення по зростанню чи спаданню, то удвоїти їх, в протилежному 
випадку перевести в протилежне значення*/
#include <conio.h>
#include <stdio.h>

 float main ()
{
	float a, b, c;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	if(a<b && b<c || a>b && b>c)
	{
	a=a*2;
	b=b*2;
	c=c*2;
	printf("a=%.2f\nb=%.2f\nc=%.2f",a,b,c);
	}
	else
	{
	a=a*(-1);
	b=b*(-1);
	c=c*(-1);
	printf("a=%.2f\nb=%.2f\nc=%.2f",a,b,c);
	}
	return 0;
	getch();
}
