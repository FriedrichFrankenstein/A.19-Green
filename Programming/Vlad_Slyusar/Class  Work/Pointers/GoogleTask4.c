#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define M 25

float closeNumber ( float array [], int N, int average )
{
    int i;
    float temp = 0, maxClose = fabs ( fabs ( array[0] ) - fabs ( average ) ), result;
    for ( i = 1; i < N; i++ )
    {
        temp = fabs ( array [i] - average );
        if ( temp < maxClose )
        {
            maxClose = temp;
            result = array[i];
        }
    }
    printf ( "\nmax close = %g\n", result );
    return result;
}

int main()
{
    srand ( time ( NULL ) );
    int i, N = 0, k = 0, h = 0;
    float averageSecond = 0, averageThird = 0, sumSecond = 0, sumThird = 0, maxClose = 0;
    float array [M];
    for ( i = 0; i < M; i ++ )
    {
        array [i] = 5 - rand() % 10 + rand() % 3 * 0.23;
        if ( array [i] < 0 )
        {
            N++;
        }
    }
    float *arraySecond = malloc ( N * sizeof ( float ) );
    float *arrayThird = malloc ( ( M - N ) * sizeof ( float ) );
    for ( i = 0; i < M; i ++ )
    {
        if ( array [i] < 0 )
        {
            * ( arraySecond + h ) = array[i];
            h++;
        }
        else
        {
            * ( arrayThird + k ) = array [i];
            k++;
        }
    }
    printf ( "Second array: \n" );
    for ( i = 0; i < N; i++ )
    {
        sumSecond += * ( arraySecond + i );
        printf ( "%g ", * ( arraySecond + i ) );
    }
    averageSecond = sumSecond / N;
    printf ( "\nAverage second = %g\n", averageSecond );
    printf ( "Third array: \n" );
    for ( i = 0; i < M - N; i++ )
    {
        sumThird += * ( arrayThird + i );
        printf ( "%g ", * ( arrayThird + i ) );
    }
    averageThird = sumThird / ( M - N );
    printf ( "\nAverage third = %g\n", averageThird );
    if ( fabs ( averageSecond ) >= fabs ( averageThird ) )
    {
        free ( arrayThird );
        printf ( "Third array cleaned\n" );
        maxClose = closeNumber ( arraySecond, N, averageSecond );
        for ( i = 0; i < N; i++ )
        {
            if ( arraySecond [i] == maxClose )
            {
                arraySecond[i] = averageSecond;
            }
            printf ( "%g ", arraySecond [i] );
        }
    }
    else
    {
        free ( arraySecond );
        printf ( "Second array cleaned\n" );
        maxClose = closeNumber ( arrayThird, M - N, averageThird );
        for ( i = 0; i < M - N; i++ )
        {
            if ( arrayThird [i] == maxClose )
            {
                arrayThird[i] = averageThird;
            }
            printf ( "%g ", arrayThird [i] );
        }
        getch();
        return 0;
    }
}


