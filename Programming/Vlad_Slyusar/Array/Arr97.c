#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i, sum = 0, a;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A [lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 11;
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        for ( a = 0; a < lengthArray; a++ )
        {
            if ( A[a] == 0 || a == i )
            {
                continue;
            }
            if ( A[i] == A[a] )
            {
                A[i] = 0;
            }
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i] );
    }
    getch ();
    return 0;
}
