#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int numbersBetweenNumbers ( int a, int b )
{
    int counter = 0;
    for ( ; a <= b; a++ )
    {
        counter ++;
    }
    return counter;
}

int main()
{
    int A, B, counter = 0;
    printf ( "Enter 2 numbers: " );
    scanf ( "%i%i", &A, &B );
    counter = numbersBetweenNumbers (A, B);
    printf ( "COunter: %i", counter );
    getchar();
    return 0;
}

