#include <conio.h>
#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b;
	printf("a-");
	scanf("%i",&a);
	printf("b-");
	scanf("%i",&b);
	float k;
	k = a-((a/b)*b);
	printf("k=%f",k);
	return 0;
	getch();
}
