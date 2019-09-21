#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time ( NULL ) );
    int  i, sum = 0, numOfArr;
    int A [10]  ;
    for ( i = 0; i < 10; i++){
        printf ("Enter number [%i]: ", i);
        scanf("%i", &numOfArr);
        A [i] = numOfArr;
    }
    for ( i = 9; i > 0; i-- )
    {
        A [i] -= A [i - 1];
       // printf ( "A11 [%i] = %i\n", i, A[i] );
    }
    for ( i = 0; i < 10; i++ )
    {
        sum += A[i];
    }
    for ( i = 0; i < 10; i++ )
    {
        printf ( "A [%i] = %i\n", i, A[i] );
    }
    printf ( "Sum = %i", sum );
    getch ();
    return 0;
}
