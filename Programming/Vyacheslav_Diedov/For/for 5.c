#include <stdio.h>
#include <conio.h>



int main()
{
    float a, b, c;
    printf("Enter price-  ");
    scanf("%f", &a);
    for (b=0.1;b<=1;b=b+0.1)
    {
    	c=a*b;
    	printf("%f\n",c);
	}
	getch();
    return 0;
}

