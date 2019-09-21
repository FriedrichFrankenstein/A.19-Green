#include <stdio.h>
#include <conio.h>



int main()
{
    int a, b, c, d, count;
    count=1;
    printf("Enter a and b  ");
    scanf("%i%i", &a, &b);
    for (c=a+1;c<b;c++)
    {
    	printf("%i", c);
    	d=count++;
	}
	printf("\nCount=%i",d);
	getch();
    return 0;
}

