#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int a, b, count;
    printf("Enter a and b-  ");
    scanf("%i%i", &a, &b);
	while (a>=b){
	a=a-b;
	count++;
		printf("a1=%i\nb1=%i\n",a, count);
}
	printf("a=%i\nb=%i",a, count);
    getch();
    return 0;
}
