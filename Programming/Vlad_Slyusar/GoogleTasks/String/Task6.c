#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




int main()
{
    float number1, number2;
    int iNumber1, iNumber2;
    char *str = calloc( 50 , 1);
    scanf("%f%f", &number1, &number2);
    iNumber1 = number1;
    iNumber2 = number2;
    sprintf(str, "%i %i", iNumber1, iNumber2);
    puts(str);
    sscanf(str, "%g %g", &number1, &number2);
    printf("%g %g\n", number1, number2);
    getch();
    return 0;
}

