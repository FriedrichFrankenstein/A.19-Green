#include <stdio.h>
#include <conio.h>
#define N 100

int main ()
{
    int array[N];
    int Num = 0, i = 0, b, counter = 0;
    char signOn;
    do{

    signOn = 'a';
    printf ( "Enter Num: " );
    scanf ( "%i", &Num );
    while ( Num > 0 )
    {
        if ( Num % 2 == 0 )
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
        Num /= 2;
        i++;
        counter++;
    }
     for ( i = counter - 1; i >= 0; i-- )
    {
        printf ( "%i", array[i] );
    }
    counter = 0;
    i = 0;
    printf("\nIf you want to do that again press 1\n");
    signOn = getch();
    } while (signOn == '1');

}
