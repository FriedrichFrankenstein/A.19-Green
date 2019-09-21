#include <stdio.h>
#include <conio.h>
#include <math.h>
#define M 50
#define N 50


void putEl ( int arr [][N], int *plengthM)
{
    int posM = 0, posN = 0, num;

    if ( *plengthM == 1 )
    {
        printf ( "Enter position and number: " );
        scanf ( "%i%i", &posN, &num );
    }
    else
    {
        printf ( "Enter  string, column and number: " );
        scanf ( "%i%i%i", &posM, &posN, &num );
    }
    if ( posM > M || posN > N )
    {
        printf ( "Position is more than length of array!" );
        return;
    }
    arr [posM][posN] = num;
    printf ( "%i\n", arr[posM][posN] );
}

void getEl ( int arr [][N], int *plengthM )
{
    int posM = 0, posN = 0;
    if ( *plengthM == 1 )
    {
        printf ( "Enter position: " );
        scanf ( "%i", &posN );
    }
    else
    {
        printf ( "Enter  string and column: " );
        scanf ( "%i%i", &posM, &posN );
    }
    if ( posM > M || posN > N )
    {
        printf ( "Position is more than length of array!" );
        return ;
    }
    printf ( "%i\n", arr[posM][posN] );
}

void nullArray ( int arr[][N], int *plengthM, int *plengthN )
{
    int i, j;
    for ( i = 0; i < *plengthM; i++ )
    {
        for ( j = 0; j < *plengthN; j++ )
        {
            arr [i][j] = 0;
        }
    }
}

void printArray ( int arr [][N], int *plengthM, int *plengthN )
{
    int i, j;
    for ( i = 0; i < *plengthM; i++ )
    {
        for ( j = 0; j < *plengthN; j++ )
        {
            printf ( "%i  ", arr[i][j] );
        }
        printf ( "\n" );
    }
}

void whichArray ( int *plengthM, int *plengthN )
{
    char choise;
    do
    {
        printf ( "Which array do you want to use ( 1 - one-dimensional; 2 - two-dimensional): \n" );
        choise = getch();
    }
    while ( choise != '1' && choise != '2' );
    switch ( choise )
    {
    case '1':
    {
        printf ( "Enter length of array ( max = 50): " );
        scanf ( "%i", &*plengthN );
        *plengthM = 1;
        break;
    }
    case '2':
        printf ( "Enter length of array(strings and columns): " );
        scanf ( "%i%i", &*plengthM, &*plengthN );
        break;
    }
}

int main ()
{
    int lengthM = 0, lengthN = 0;
    int  *plengthM = &lengthM, *plengthN = &lengthN;
    int array [M][N];
    char choise;
    whichArray ( plengthM, plengthN );
    nullArray ( array, plengthM, plengthN );
    do
    {
        putEl ( array, plengthM );
        getEl ( array, plengthM );
        printArray ( array, plengthM, plengthN );
        printf ( "Enter 1 if you want do that again, enter another number for exit: \n" );
        choise = getch();
    }
    while ( choise == '1' );
    getchar();
    return 0;
}
