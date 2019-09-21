#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, counter = 0;
    scanf ( "%i", &n );
    int  j, max = n + ( n - 2), array[max][max], k = 0, i = 0, g = ( max - 3 ) / 2 + 2;
   // printf("max = %i\n", max);
    for ( i = 0; i <= g; i += 2 )
    {
       // printf("max = %i\n", max);
        for ( j = i; j < max - i ; j++ )
        {
             //printf("array = %i\n ", array [i][j]);
           //  printf("n = %i", n-counter);
           array[i][j] = n - counter;

        }
       // printf("j = %i\n", j);
        for ( k = i + 1; k < max - i ; k++ )
        {

            array[k][j] = n - counter;
        }
        for ( --j ;j > max - i ; j-- )
        {
            array[k][j] = n - counter;
        }
        for ( --j ;k > max - i ; k-- )
        {
           array[i][j] = n - counter;
        }
        counter++;


    }
    for (i = 0; i < max; i++){
        for (j = 0; j < max; j++){
            printf("%i ", array [i][j]);
        }
        printf("\n");
    }
    return 0;
}


