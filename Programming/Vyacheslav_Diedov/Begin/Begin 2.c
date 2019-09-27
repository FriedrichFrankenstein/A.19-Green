//Дано сторона квадрата a. Знайти його площу S=a*a.
#include <conio.h>
#include <stdio.h>
#include <math.h>

int area(int number,int square)
{
int summa=pow(number,square);
return summa;
}

int main ()
{
	int number, square=2;
	printf("Enter the side of the square-");
	scanf("%i",&number);
	int Summa;
	Summa = area(number, square);
	printf("Square square-%i",Summa);
	return 0;
	getch();
}
