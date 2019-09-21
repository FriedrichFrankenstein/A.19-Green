#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int  i, sum = 0;
    int A [5];
    for ( i = 0; i < 5; i++ )
    {
        A [i] = rand() % 101;
        sum += A[i];
    }
    for ( i = 0; i < 5; i++ )
    {
        A [i] *= sum;
    }
    for ( i = 0; i < 5; i++ )
    {
        printf ( "A [%i] = %i\n", i, A[i] );
    }
    getch ();
    return 0;
}
