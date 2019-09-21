#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void transmittedArray ( int **mainArray, int M, int N );

void fillingArray ( int **mainArray, int M, int N );

int main()
{
    srand ( time ( NULL ) );
    int M, N, i, j;
    char signOff = 'a';
    printf ( "Number o rows: " );
    scanf ( "%i", &M );
    printf ( "Enter number of column: " );
    scanf ( "%i", &N );
    int **mainArray = malloc ( M * sizeof ( int ) );
    for ( i = 0; i < M; i++ )
    {
        * ( mainArray + i ) = malloc ( N * sizeof ( int ) );
    }
    fillingArray(mainArray, M, N);
    transmittedArray(mainArray, M, N);
    for ( i = 0; i < M; i++ )
    {
        free ( * ( mainArray + i ) );
    }
    free ( mainArray );
    getch();
    return 0;
}

void fillingArray ( int **mainArray, int M, int N )
{
    int i, j;
    for ( i = 0; i < M; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            * ( * ( mainArray + i ) + j ) = 50 - rand() % 41;
        }
    }
}

void transmittedArray ( int **mainArray, int M, int N )
{

    int i, j;
    for ( i = 0; i < M; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
           printf("%i ", * ( * ( mainArray + i ) + j ) );
        }
        printf("\n");
    }
    printf("\n");
     for ( i = 0; i < M; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
           printf("%i ", * ( * ( mainArray + j ) + i ) );
        }
        printf("\n");
    }
}



