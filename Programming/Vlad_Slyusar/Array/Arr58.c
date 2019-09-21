#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i, sum = 0;
    printf ( "Enter array length: " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray];
    for ( i = 0; i < lengthArray; i++){
        A[i] = rand()%11;
        sum += A[i];
        B[i]= sum;
    }
    for (i = 0; i < lengthArray; i++ ){
        printf ("A [%i] = %i\n", i, A[i]) ;
    }
    for (i = 0; i < lengthArray; i++ ){
        printf ("B [%i] = %i\n", i, B[i]) ;
    }

    getch ();
    return 0;
}
