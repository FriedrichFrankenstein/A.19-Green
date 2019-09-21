#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int A, B, extraLength, B1;
    printf ( "enter A and B length (A > B)" );
    scanf ( "%i%i", &A, &B );
    B1 = B;
    while ( A >= B )
    {
        B += B1;
    }
    B -= B1;
    extraLength = A - B;
    printf ( "Extra = %i", extraLength );
    getch ();
    return 0;
}
