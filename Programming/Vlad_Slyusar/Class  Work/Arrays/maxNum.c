#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>





int main()
{
    int N, sum = 0, i, temp;
    printf ( "Enter your big number: " );
    scanf ( "%i", &N );
    while ( N > 0 )
    {
        sum += N % 10 ;
        N /= 10;
    }
    printf ( "Result = %i", sum );
    getch();
    return 0;
}
