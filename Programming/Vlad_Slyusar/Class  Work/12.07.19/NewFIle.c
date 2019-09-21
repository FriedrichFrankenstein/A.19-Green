#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>





int main ()
{
    int result, sum = 0, number, min = 100000;
    float avarager ;
    FILE *pInput = fopen("resource.txt", "r");
    int i = 0;
    while (fscanf(pInput, "%i", &number) != EOF){
            if ( min > number){
                min = number;
            }
    }
//    avarager = (float) sum /i;
    printf("%i", min);
    fclose(pInput);
    getchar();
    return 0;
}
