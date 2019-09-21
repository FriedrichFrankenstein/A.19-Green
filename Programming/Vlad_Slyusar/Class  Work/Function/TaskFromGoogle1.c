#include <stdio.h>
#include <conio.h>
#include <math.h>

void SortInc3 ( int *A, int *B, int *C )
{
    int temp = 0;
    if ( *B > *A && *B > *C )
    {
        if ( *C < *A )
        {
            temp = *A;
            *A = *C;
            *C = *B;
            *B = temp;
        }
        else
        {
            temp = *B;
            *B = *C;
            *C = temp;
        }
    }
    else if ( *C < *A && *A > *B )
    {
        if ( *C > *B )
        {
            temp = *C;
            *C = *A;
            *A = *B;
            *B = temp;
        }
        else
        {
            temp = *C;
            *C = *A;
            *A = temp;
        }

    } else if (*B < *A){
        temp = *B;
        *B = *A;
        *A = temp;
    }
}
int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    int *pn1 = &n1;
    int *pn2 = &n2;
    int *pn3 = &n3;
    printf ( "Series  of  3 numbers: " );
    scanf ( "%i%i%i", &n1, &n2, &n3);
    SortInc3(pn1, pn2, pn3);
    printf ( "Series 1: %i %i %i\n", n1, n2, n3 );
    getch ();
    return 0;
}

