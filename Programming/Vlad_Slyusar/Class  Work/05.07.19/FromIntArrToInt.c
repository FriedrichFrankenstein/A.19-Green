#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    int i, number = 0, j = 0;
    int array [] = {};
    int len = sizeof(array)/ 4;
    for ( i = 0 ; i < len; i++){
        number = number*10+ array[i];
    }
    number++;
    for ( i = len -1; i >= 0;i--){
        array[i] = number %10;
        number /=10;
    }
    for ( i = 0 ; i < len; i++){
        printf("%i", array[i]);
    }
    getch();
    return 0;
}

