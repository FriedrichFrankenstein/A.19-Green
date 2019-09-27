#include <conio.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b;
	printf("Entered a and b ");
	scanf("%i%i", &a, &b);
	int p, a1, sum=0;
	int count;
	for(a1=a;a1<=b; a1++)
	{
	p=pow(a1,2);
	sum+=p;
	printf("Pow=%i\n",p);
	printf("Sum=%i\n",sum);
	}
	return 0;
	getch();
}
