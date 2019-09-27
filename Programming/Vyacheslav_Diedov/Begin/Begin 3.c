//Дано сторони прямокутника а і b. Знайти його плошу S=a*b та периметр P=2*(a+b)
#include <conio.h>
#include <stdio.h>
#include <math.h>

int area(int a,int b)
{
int summaArea=a*b;
return summaArea;
}

int per(int a, int b)
{
int summaPer=2*(a+b);
return summaPer;
}

int main ()
{
	int a,b;
	printf ("Enter side a-");
	scanf("%i",&a);
	printf ("Enter side b-");
	scanf("%i",&b);
	int S, P;
	S = area(a,b);
	P = per(a,b);
	printf("Area=a*b=%i*%i=%i\nPer=2*(a+b)=2*(%i+%i)=%i",a,b,S,a,b,P);
	return 0;
	getch();
}
