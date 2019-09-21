#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int* summ ( int *A, int *B, int *length, int lengthA, int lengthB );

int* product (int *A, int *B,  int lengthA, int lengthB);

int main()
{
    int A  [] = {1, 2, 3, 4, 5};
    int B  [] = {0, 3, 6};
    int i;
    int lengthA = sizeof ( A ) / 4;
    int lengthB = sizeof ( B ) / 4;
    int *C ;
 //   C = summ ( A, B, &length, lengthA, lengthB );
    C = product(A, B, lengthA, lengthB);
    for (i = 0; i < _msize(C)/4; i++){
        printf("%i\n", *(C + i));
    }
    getch();
    return 0;
}

int* summ ( int *A, int *B, int *length,  int lengthA, int lengthB )
{
    int i, j, flag = 0;
     printf("%i", sizeof(A));
    int *C = ( int* ) calloc ( sizeof ( int ), *length );
    for ( i = 0; i < lengthA; i++ )
    {
        * ( C + i ) = A[i];
    }
    for ( i = 0; i < lengthB ; i++ )
    {
        flag = 0;
        for ( j = 0; j < lengthA ; j++ )
        {
            if ( B[i] == A[j] )
            {
                flag = 1;
                break;
            }
        }
         if ( flag == 0 )
            {
                *length += 1;
                C = realloc ( C, sizeof ( int ) *  *length );
                * ( C + ( *length - 1 ) ) = B[i];
            }
    }
    return C;
}

int* product (int *A, int *B,  int lengthA, int lengthB){
    int i, j, flag = 0, length = 0;
     int *C = ( int* ) calloc ( sizeof ( int ), length );
     for ( i = 0; i < lengthB ; i++ )
    {
        flag = 0;
        for ( j = 0; j < lengthA ; j++ )
        {
            if ( B[i] == A[j] )
            {
                flag = 1;
                break;
            }
        }
         if ( flag == 1 )
            {
                length += 1;
                C = realloc ( C, sizeof ( int ) * length );
                 * ( C + ( length - 1) ) = B[i];
            }
    }
    return C;

}
