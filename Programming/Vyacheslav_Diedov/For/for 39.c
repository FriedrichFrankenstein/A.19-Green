#include <stdio.h>
#include <conio.h>



int main()
{
    int a, b, c;
    printf("Enter a and b  ");
    scanf("%i%i", &a, &b);
    for(a=a+1;a<b;++a)
    {
    for(c=1;c<=a;++c)
    {
    printf("%i", a);
	}
	printf("\n");
	}
    getch();
    return 0;
}

