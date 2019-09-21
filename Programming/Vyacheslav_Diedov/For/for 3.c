#include <stdio.h>
#include <conio.h>



int main()
{
    int a, b;
    printf("Enter a and b  ");
    scanf("%i%i", &a, &b);
    int count=1;
    for(b=b-1;a<b;--b)
    {
    printf("%i", b);
    printf("%i",count++);
	}
    getch();
    return 0;

