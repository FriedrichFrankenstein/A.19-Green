//Дано периметр окружності d. Знайти його довжину L=Пі*d.В якості значення Пі використовувати 3,14
#include <conio.h>
#include <stdio.h>

float main ()
{
	float d;
	float PI = 3.14159264;
	printf("Enter perimeter(d)-");
	scanf("%f",&d);
	float L;
	L =(float)d*PI;
	printf("Length(L)=d*PI=%.2f*%.2f=%.2f",d,PI,L);
	return 0;
	getch();
}
