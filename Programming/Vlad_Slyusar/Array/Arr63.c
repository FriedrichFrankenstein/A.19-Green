#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define lengthArray 5

int main()
{
    srand ( time ( NULL ) );
    int  i, sum = 0, K = 0, h;
    int A[lengthArray], B[lengthArray], C[lengthArray + lengthArray];
    for ( i = 0; i < lengthArray; i++ )
    {
        K = rand() % 101;
        h = i;
        while ( 1 )
        {
            //printf ( "h = %i\n", h );
            if ( A[h - 1] > K && h >= 1 )
            {
                A[h] = A [h - 1];
                h--;
            } else if ( h == 0 )
            {
                A[h] = K;
                break;
            }
            else
            {
                A[h] = K;
                break;
            }
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        K = rand()%101;
        h = i;
        while ( 1 )
        {
         //   printf ( "h = %i\n", h );
            if ( B[h - 1] > K && h >= 1 )
            {
                B[h] = B [h - 1];
                h--;
               }else  if ( h == 0 )
            {
                B[h] = K;
                break;
            }
            else
            {
                B[h] = K;
                break;
            }
        }
    }
    for (i = 0 ; i < lengthArray; i++){
        C [i] = A [ i];

    }
     for (i = 5 ; i < lengthArray*2; i++){
        K = B [i-5] ;
        h = i;
        while ( 1 )
        {
         //   printf ( "h = %i\n", h );
            if ( C[h - 1] > K && h >= 1 )
            {
                C[h] = C [h - 1];
                h--;
                }else if ( h == 0 )
            {
                C[h] = K;
                break;
            }

            else
            {
                C[h] = K;
                break;
            }
        }

    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i] );
    }
     for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "B[%i] = %i\n", i, B[i] );
    }
    for ( i = 0; i < lengthArray*2; i++ ){
        printf("C [%i] = %i\n", i, C[i]);
     }

    getch ();
    return 0;
}
