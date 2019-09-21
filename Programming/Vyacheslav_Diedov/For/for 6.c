#include <stdio.h>
#include <conio.h>



int main()
{
    float a, b, c;
    printf("Enter price-  ");
    scanf("%f", &a);
    for (b=1;b<=2;b=b+0.2)
    {
    	c=a*b;
    	printf("%f\n",c);
	}
	getch();
    return 0;
}

