#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void checkPolindrom ( int number){
    int a [100], i, counter = 0, temp = 0;
    for ( i = 0;  ; i++){
        a [i] = number%10;
        number /=10;
        counter ++;
        if ( number < 1){
            break;
        }
    }
    for ( i = 0; i < counter; i++){
        if (a[i] != a [counter - (i + 1)]){
            printf("Not Polidrom");
            return;
        }
    }
    printf("Polidrom");




}

int main()
{
    srand ( time ( NULL ) );
    int number;
    printf ( "Enter number: " );
    scanf ( "%i", &number);
    checkPolindrom(number);
    getch ();
    return 0;
}
