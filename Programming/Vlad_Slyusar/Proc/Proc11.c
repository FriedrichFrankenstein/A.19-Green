#include <stdio.h>
#include <conio.h>
#include <math.h>

void Minmax ( int *X, int *Y )
{
    int temp = 0;
    if (*X < *Y){
            temp = *X;
            *X = *Y;
            *Y = temp;
        }
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
    Minmax(pA, pB);
    Minmax(pC, pD);
    Minmax(pA, pC);
    Minmax(pB, pD);
    printf("Nax = %i; min = %i",A , D);
    getch ();
    return 0;
}
