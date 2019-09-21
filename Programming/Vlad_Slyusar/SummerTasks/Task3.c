#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int** getMemory ( int *pN );

void fillingArray ( int **points, int N );

void analysisOfArray ( int **points, int N, int *plineNumber1, int *plineNumber2 );

int lengthOfLine ( int x1, int x2, int y1, int y2 );

int main()
{
    int N, *pN = &N, i, lineNumber1, lineNumber2;
    int *plineNumber1 = &lineNumber1, *plineNumber2 = &lineNumber2;
    int **points =  getMemory ( pN );
    fillingArray ( points, N );
    analysisOfArray(points, N, plineNumber1, plineNumber2);
    printf("%i %i", lineNumber1, lineNumber2);
    free(points);
    getch();
    return 0;
}

int** getMemory ( int *pN )
{
    int i;
    printf ( "Enter number of points\n" );
    scanf ( "%i", pN );
    int **array = ( int ** ) calloc ( sizeof ( int ), *pN );
    for ( i = 0; i < *pN; i++ )
    {
        * ( array + i ) = ( int * ) calloc ( sizeof ( int ), 2 );
    }
    return array;
}

void fillingArray ( int **points, int N )
{
    int i, x, y;
    for ( i = 0; i < N; i++ )
    {
        printf ( "Enter couple of points (x y)\n", i );
        scanf ( "%i %i", &x, &y );
        points [i][0] = x;
        points [i][1] = y;
    }
}

void analysisOfArray ( int **points, int N, int *plineNumber1, int *plineNumber2 )
{
    int i, j, maxLength = 0, lenght;
    for ( i = 0; i < N; i++ )
    {
        for ( j = i + 1; j < N; j++ )
        {
            lenght = lengthOfLine ( points [i][0], points[j][0], points [i][1], points[j][1] );
            if ( lenght > maxLength )
            {
                maxLength = lenght;
                *plineNumber1 = i;
                *plineNumber2 = j;
            }
        }
    }
}

int lengthOfLine ( int x1, int x2, int y1, int y2 )
{
    int result = sqrt ( pow ( ( x2 - x1 ), 2 ) + pow ( ( y2 - y1 ), 2 ) );
    return result;
}
