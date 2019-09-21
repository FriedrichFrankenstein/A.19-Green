#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define N 7


void createArray ( int arr [][7] )
{
    int i, j;
    for ( i = 0 ; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            arr [i][j] = rand() % 10;
        }
    }
}

void printArray ( int arr [][7] )
{
    int i, j;
    for ( i = 0 ; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            printf ( "%i  ", arr [i][j] );
        }
        printf ( "\n\n" );
    }
}

int main ()
{
    int Z, i;
    int *A;
    srand ( time ( NULL ) );
    printf ( "Enter length of array: " );
    scanf ( "%i", &Z );
    A =  calloc ( Z, sizeof ( int ) ) ;
    for ( i = 0; i < Z; i++ )
    {
        A[i] = i;
        printf ( "%i ", A[i] );
    }
    free ( A );
    getch();
    return 0;
}
