#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand ( time ( NULL ) );
    int M, N, i, h, maxFromMin = 0;
    printf ( "Enter length of array M and N: " );
    scanf ( "%i%i", &M, &N );
    printf ( "M = %i, N = %i\n", M, N );
    int array [M][N];
    int additionalArray [M];
    for ( i = 0; i < M; i++ )
    {
        additionalArray [i] = 0;
    }
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < N; h++ )
        {
            array [i][h] = rand()%11;
            if ( array [i][h] > additionalArray [i] && h != 0 )
            {
                additionalArray [i] = array[i][h];
            }
            else if ( h == 0 )
            {
                additionalArray [i] = array[i][h];
            }
        }
    }
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < N; h++ )
        {
            printf ( "Array [%i][%i] = %i\n", i, h, array [i][h] );
        }
    }
    for ( i = 0; i < M; i++ )
    {
        printf ( "Array max [%i] = %i\n", i, additionalArray [i] );
    }
    getchar();
    return 0;
}

