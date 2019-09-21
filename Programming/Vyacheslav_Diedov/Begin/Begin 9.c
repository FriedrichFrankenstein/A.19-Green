//Дано два невідємних числа a i b. Знайти їх середнє геометричне, тобто корінь квадратний a*b
#include <conio.h>
#include <stdio.h>
#include <math.h>

int interestingTask(int a,int b)
{
int summa=sqrt(a*b);
return summa;
}

int main ()
{
	int a, b;
	printf("Enter a non-negative number\na=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
if(a>=0 && b>=0)
{
int Summa;
	Summa = interestingTask(a,b);
	printf("Summa=%i",Summa);
}
else
{
	printf("Incorrect data entered");
}
return 0;
getch();
}
