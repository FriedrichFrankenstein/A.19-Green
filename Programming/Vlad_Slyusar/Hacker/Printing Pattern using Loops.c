#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, j, max = n + ( n - 2), array[max][max], k, i;
    scanf ( "%d", &n );
    for ( i = 0; i <= max; i++ )
    {
        for ( j = i; j < max - i; j++ )
        {
           array[i][j] = n - i;

        }
        for ( k = i; k < max - i; k++ )
        {
            array[k][j] = n - i;
        }
        for ( ;j > max - i; j-- )
        {
            array[k][j] = n - i;
        }
        for ( ;k > max - i; k-- )
        {
           array[i][j] = n - i;
        }
    }
    for (i = 0; i < max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", array [i][j]);
        }
        printf("\n");
    }
    return 0;
}


