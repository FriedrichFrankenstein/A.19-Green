#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i, sum = 0, max = 0, min = 0, add;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A [lengthArray],A1 [lengthArray] ;
    for ( i = 0; i < lengthArray; i++){
        A [i] = rand()%101;
        A1 [i] = A [i];
         if ( A [max] < A [i]){
            max = i;
        }
        if ( A[i] < A[min] ){
            min = i;
        }
    }
    printf ("Max = %i\nMin = %i\n", max, min);
    if ( max > min){
            add = min;
        for (max; max >= min; max--, add++){
            A1 [add]= A[max];
        }
    } else{
        add = max;
        for (min; max <= min; min--, add++){
            A1 [add]= A[min];
        }
    }
    for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A[%i] = %i\n", i, A[i]);
    }
     for ( i = 0; i < lengthArray; i++ )
    {
        printf ( "A1 [%i] = %i\n", i, A1[i] );
    }


    getch ();
    return 0;
}
