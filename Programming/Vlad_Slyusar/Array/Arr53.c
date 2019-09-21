#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray], C[lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 101;
        B[i] = rand() % 101;
        if ( A[i] > B [i] )
        {
            C[i] = A [i];
            printf ( "Place: %i; A = %i, B = %i, C = %i\n", i, A[i], B[i], C[i] );
        }
        else
        {
            C[i] = B[i];
            printf ( "Place: %i; A = %i, B = %i, C = %i\n", i, A[i], B[i], C[i] );
        }
    }
    getch ();
    return 0;
}
