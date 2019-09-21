#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, sum = 0, n = 0, max, numOfArr ;
    int A [10] ;
    int B[10];
    for ( i = 0; i < 10; i++ )
    {
        printf ( "Enter number [%i]: ", i );
        scanf ( "%i", &A[i] );
    }
    for ( i = 0; i < 10; i++ )
    {
        if ( A [i] < 0 )
        {
            B [n] = A[i];
            n++;
        }
    }
    max = 0;
    for ( i  = 1; i < n; i++ )
    {
        if ( B[i] > B[max] )
        {
            max = i;
        }
    }
    for ( i = 0; i < n; i++ )
    {
        printf ( "B [%i] = %i\n", i, B[i] );
    }
    printf ( "Max = %i", B[max] );
    getch ();
    return 0;
}
