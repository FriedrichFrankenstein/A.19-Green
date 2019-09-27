#include <stdio.h>
#include <conio.h>



int main()
{
    int a, b;
    printf("Enter price-  ");
    scanf("%i", &a);
    for(b=1;b<=10;b++)
    {
    printf("Price %i*%i = %i\n", a, b, b*a);
    }
    getch();
    return 0;
}
