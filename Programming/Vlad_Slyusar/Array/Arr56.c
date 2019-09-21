#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int lengthArray, i, n = 0, sizeArray;
    printf ( "Enter array length ( max 15): " );
    scanf ( "%i", &lengthArray );
    int A[lengthArray], B[lengthArray / 3];
    for ( i = 0; i < lengthArray; i++ )
    {
        A[i] = rand() % 101;
    }
    for ( i = 2; i <= lengthArray ; i += 3, n++ )
    {
        B [n] = A[i];
    }
    printf("Length B = %i\n", lengthArray/3);
    for ( i = 0; i < lengthArray / 3 ; i++ )
    {
        printf ("B [%i] = %i\n",  i,  B[i] );
    }
    sizeArray = sizeof ( B ) / sizeof ( int );
    getch ();
    return 0;
}
