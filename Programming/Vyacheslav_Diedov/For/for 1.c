#include <stdio.h>
#include <conio.h>



int main()
{
    int a, b, c;
    printf("Enter a and b  ");
    scanf("%i%i", &a, &b);
    for(;a<=b;a++){
    	c+=a;
	}
    printf("%i",c);
    getch();
    return 0;
}

