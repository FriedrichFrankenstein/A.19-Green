/*Дано довжину ребер a, b, c  прямокутного паралелепітета. Знайти його об'єм V=a*b*c і площу 
поверхні S=2*(a*b+d*c+a*c)*/
#include <conio.h>
#include <stdio.h>

int main()
{
	int a,b,c,V,S;
	printf("a=",a);
	scanf("%i",&a);
	printf("b=",b);
	scanf("%i",&b);
	printf("c=",c);
	scanf("%i",&c);
	V=a*b*c;
	S=2*(a*b+b*c+a*c);
	printf("V=a*b*c=%i*%i*%i=%i\nS=2*(a*b+b*c+a*c)=2*(%i*%i+%i*%i+%i*%i)=%i",a,b,c,V,a,b,b,c,c,a,S);
	return 0;
	getch();
}
