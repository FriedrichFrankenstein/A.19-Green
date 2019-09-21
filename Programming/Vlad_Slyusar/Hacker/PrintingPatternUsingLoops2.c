#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int M, i = 0, h = 0, k = 0, g = 0, counter = 0, n, j;
    scanf ( "%i", &n );
    int max = n + ( n - 1);
    g = ( max - 3 ) / 2 + 2;
    int A [max][max]  ;
    for ( i = 0; i < max; i++ )
    {
        for ( h = 0; h < max; h++ )
        {
            A [i][h] = i;
        }
    }
    for ( i = 0; i <= g; i++ )
    {
        for ( h = i ; h < max - i; h++ )
        {
            A[i][h] = n - counter;
            if ( i == g && h == g )
            {
                return 0;
            }
        }
        for ( k = i + 1, h = max - ( i + 1 ); k <= max - ( i + 1 ); k++ )
        {
             A[k][h] = n- counter;
        }
        for ( k = max - ( i + 1 ), h = max - ( i + 1 ); h >= i; h -- )
        {
             A[k][h] = n - counter;
        }
        for ( h = i, k = max - ( i + 2 ) ; k >= i + 1; k-- )
        {
             A[k][h] = n - counter;
        }
        counter++;
    }
     for (i = 0; i <max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", A [i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}

