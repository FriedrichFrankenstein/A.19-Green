#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand ( time ( NULL ) );
    int M, N, i, h;
    printf ( "Enter length of array M and N: " );
    scanf ( "%i%i", &M, &N );
    printf ( "M = %i, N = %i\n", M, N );
    int array [M][N];
    int arrayForSum [N] ;
    for ( i = 0; i < M; i++ )
    {
        arrayForSum [i] = 1;
    }
    for ( h = 0; h < M; h++ )
    {
        for ( i = 0; i < N; i++ )
        {
            array [i][h] = 1 + rand() % 10;
            arrayForSum [h] *= array [i][h];
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
        printf ( "Array for sum [%i] = %i\n", i, arrayForSum [i] );
    }
    getchar();
    return 0;
}

