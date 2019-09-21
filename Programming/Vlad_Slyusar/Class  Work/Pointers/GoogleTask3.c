#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void arithmeticMean ( int **mainArray, int M, int N )
{
    int i, j;
    int *sumArray = calloc ( M, sizeof ( int ) );
    for ( i = 0; i < M; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            * ( sumArray + i ) += * ( * ( mainArray + i ) + j );
        }
    }
    printf ( "\n" );
    for ( i = 0 ; i < M; i++ )
    {
        printf ( "%i ", * ( sumArray + i ) );
    }
    printf ( "\n" );
    free ( sumArray );
}


int main()
{
    srand ( time ( NULL ) );
    int M, N, i, j;
    char signOff = 'a';
    do
    {
        printf ( "Number o rows: " );
        scanf ( "%i", &M );
        printf ( "Enter number of column: " );
        scanf ( "%i", &N );
        int **mainArray = malloc ( M * sizeof ( int ) );
        for ( i = 0; i < M; i++ )
        {
            * ( mainArray + i ) = malloc ( N * sizeof ( int ) );
        }
        for ( i = 0; i < M; i++ )
        {
            for ( j = 0; j < N; j++ )
            {
                * ( * ( mainArray + i ) + j ) = rand() % 10;
            }
        }
        for ( i = 0; i < M; i++ )
        {
            for ( j = 0; j < N; j++ )
            {
                printf ( "%i ", * ( * ( mainArray + i ) + j ) );
            }
            printf ( "\n" );
        }
        arithmeticMean ( mainArray, M, N );
        for ( i = 0; i < M; i++ )
        {
            free ( * ( mainArray + i ) );
        }
        free ( mainArray );
        printf ( "If you want to stop program press ESC or another key to continue\n" );
        signOff = getch();
    }
    while ( signOff != 27 );
    getch();
    return 0;
}


