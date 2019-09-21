#include <stdio.h>
#include <conio.h>
#include <math.h>

void SortInc3 ( int *A, int *B, int *C )
{
    int temp = 0;
    if ( *B > *A && *B > *C )
    {
        if ( *C > *A )
        {
            temp = *B;
            *B = *C;
            *C = *A;
            *A = temp;
        }
        else
        {
            temp = *B;
            *B = *A;
            *A = temp;
        }
    }
    else if ( *C > *A && *C > *B )
    {
        if ( *A > *B )
        {
            temp = *C;
            *C = *B;
            *B = *A;
            *A = temp;
        }
        else
        {
            temp = *C;
            *C = *A;
            *A = temp;
        }

    } else if (*C > *A){
        temp = *C;
        *C = *A;
        *A = temp;
    }
}
int main()
{
    int A1 = 0, B1 = 0, C1 = 0, A2 = 0, B2 = 0, C2 = 0;
    int *pA1 = &A1;
    int *pB1 = &B1;
    int *pC1 = &C1;
    int *pA2 = &A2;
    int *pB2 = &B2;
    int *pC2 = &C2;
    printf ( "First series of  3 numbers: " );
    scanf ( "%i%i%i", &A1, &B1, &C1);
    printf ( "\nSecond series of  3 numbers: " );
    scanf ( "%i%i%i", &A2, &B2, &C2);
    SortInc3(pA1, pB1, pC1);
    SortInc3(pA2, pB2, pC2);
    printf ( "Series 1: %i %i %i\n", A1, B1, C1 );
    printf ( "Series 2: %i %i %i\n", A2, B2, C2 );
    getch ();
    return 0;
}

