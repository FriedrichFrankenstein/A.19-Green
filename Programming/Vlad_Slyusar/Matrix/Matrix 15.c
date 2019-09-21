#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int M, i = 0, h = 0, k = 0, g = 0;
    printf ( "Enter length of array: " );
    scanf ( "%i", &M );
    g = ( M - 3 ) / 2 + 2;
    int A [M][M]  ;
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < M; h++ )
        {
            A [i][h] = i;
        }
    }
    for ( i = 0; i <= g; i++ )
    {
        for ( h = i ; h < M - i; h++ )
        {
            printf ( "1 : %i\n", A[i][h] );
            if ( i == g && h == g )
            {
                return 0;
            }
        }
        for ( k = i + 1, h = M - ( i + 1 ); k <= M - ( i + 1 ); k++ )
        {
            printf ( "2 : %i\n", A [k][h] );
        }
        for ( k = M - ( i + 1 ), h = M - ( i + 1 ); h > i; h -- )
        {
            printf ( "3 : %i\n", A [k][h] );
        }
        for ( h = i, k = M - ( i + 2 ) ; k >= i + 1; k-- )
        {
            printf ( "4 : %i\n", A [k][h] );
        }
    }

    getchar();
}

