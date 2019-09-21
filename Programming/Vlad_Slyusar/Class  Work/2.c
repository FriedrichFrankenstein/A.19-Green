#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



void getStatus()
{
    char later;

    while (1){
    scanf ("%c", &later);
    later-= 32;
    fflush(stdin);//очищує від мусора потік бітів
    printf ("Result %c\n", later);
    }




}

int main ()
{
    int result;
    getStatus();
    //printf ("%c", result);
    getchar();
    return 0;
}
