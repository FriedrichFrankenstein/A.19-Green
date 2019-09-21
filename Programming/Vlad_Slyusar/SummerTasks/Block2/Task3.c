#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define N 5

void three_matr ( int A[][N], int B[][N], int C[][N] );

int getMaxNum ( int array [][N] );

void prinMatrix (int array [][N]);

void fillMatrix (int A[][N], int B[][N], int C[][N]);

int main()
{
    srand ( time ( NULL ) );
    int A[N][N], B[N][N], C [N][N];
    fillMatrix( A, B, C);
    three_matr(A, B, C);
    getch();
    return 0;
}


void three_matr ( int A[][5], int B[][5], int C[][5] )
{
    int i, j;
    int maxA, maxB, maxC;
    printf("Three origin matrices: \n");
    prinMatrix(A);
    printf("\n\n");
    prinMatrix(B);
    printf("\n\n");
    prinMatrix(C);
    printf("\n\n");
    maxA = getMaxNum ( A );
    maxB = getMaxNum ( B );
    maxC = getMaxNum ( C );
    if (maxA < maxB && maxA < maxC){
        printf("Norma = %i\n", maxA);
        prinMatrix(A);
    } else if (maxB < maxA && maxB < maxC){
        printf("Norma = %i\n", maxB);
        prinMatrix(B);
    } else {
        printf("Norma = %i\n", maxC);
        prinMatrix(C);
    }
}

int getMaxNum ( int array [][N] )
{
    int i, j, max = 0;
    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            if ( abs(array [i][j]) > max )
            {
                max = abs( array[i][j]);
            }
        }
    }
    return max;
}

void prinMatrix (int array [][N]){
    int i, j;
    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            printf("%3i ", array[i][j]);
        }
        printf("\n");
    }

}

void fillMatrix (int A[][N], int B[][N], int C[][N]){
    int i, j;
      for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            A [i][j] = 50 - rand() % 100;
            B [i][j] = 50 - rand() % 100;
            C [i][j] = 50 - rand() % 100;
        }
    }
}
