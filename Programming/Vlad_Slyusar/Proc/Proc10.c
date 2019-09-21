#include <stdio.h>
#include <conio.h>
#include <math.h>

void Swap ( int *X, int *Y )
{
    //printf ( "Origin number X and Y: %i %i\n", X, Y );
    int temp = 0;
    temp = *X;
    *X = *Y;
    *Y = temp;
    //printf ( "New numbers X and Y: %i %i\n", X, Y );
}
int main()
{
    int A, B, C, D;
    int *pA = &A;
    int *pB = &B;
    int *pC = &C;
    int *pD = &D;
    printf("Enter 4 numbers: ");
    scanf("%i%i%i%i", &A, &B, &C, &D);
    Swap(pA, pB);
    Swap(pC, pD);
    Swap(pB, pC);
    printf("A = %i, B = %i, C = %i, D = %i", A, B, C, D);
    getch ();
    return 0;
}
