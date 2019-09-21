#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand ( time ( NULL ) );
    int M = 5, N, i, h, maxInd = 0;
    printf ( "Enter length of array M and N: " );
    scanf ( "%i%i", &M, &N );
    printf ( "M = %i, N = %i\n", M, N );
    int array [M][N];
    int arrayForSum [M] ;
    for ( i = 0; i < M; i++ )
    {
        arrayForSum [i] = 0;
    }
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < N; h++ )
        {
            array [i][h] = rand() % 11;
            arrayForSum [i] += array [i][h];
            if ( arrayForSum[i] > arrayForSum [maxInd] )
            {
                maxInd = i;
            }
        }
    }
    printf ( "Number of line: %i, value: %i\n", maxInd, arrayForSum[maxInd] );
    for ( i = 0; i < M; i++ )
    {
        for ( h = 0; h < N; h++ )
        {
            printf ( "Array [%i][%i] = %i\n", i, h, array [i][h] );
        }
    }
    for ( i = 0; i < M; i++ )
    {
        printf ( "Array for sum [%i] = %i\n", i, arrayForSum [i] );
    }
    getchar();
    return 0;
}

