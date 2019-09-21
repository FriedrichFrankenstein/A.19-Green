#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



void getStatus()
{
    srand(time(NULL));
    int myNumber = rand () % 101, i, yourNumber;
    printf (" Enter your number: ");
    for (;;){
            scanf ("%i", &yourNumber);
        if ( myNumber > yourNumber){
            printf( "more \n");
            printf ("Enter your number: ");
        }
        else if ( myNumber < yourNumber){
            printf("less \n");
            printf ("Enter your number: ");
        }
        else{
            printf ("YOU WON!");
            break;
        }
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
