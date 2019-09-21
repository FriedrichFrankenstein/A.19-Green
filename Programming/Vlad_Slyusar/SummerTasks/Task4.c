#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void fractionSubtraction ( int A, int B, int C, int D, int *pDenominator, int *pNumerator );

int main()
{
    int A, B, C, D, denominator, numerator, *pDenominator = &denominator, *pNumerator = &numerator;
    printf ( "Enter your values: " );
    scanf ( "%i %i %i %i", &A, &B, &C, &D );
    if ( B == 0 || D == 0 )
    {
        printf ( "Denominator can't be null" );
    }
    else
    {
        fractionSubtraction ( A, B, C, D, pDenominator, pNumerator );
        printf ( "%i\n---\n%i", numerator, denominator );
    }
    getch();
    return 0;
}

void fractionSubtraction ( int A, int B, int C, int D, int *pDenominator, int *pNumerator )
{
    int lcm = 1, gcd = 2;
    while ( lcm % B != 0 || lcm % D != 0 )
    {
        lcm++;
    }
    if ( lcm > 1){
    A = ( lcm / B ) * A;
    C = ( lcm / D ) * C;
    D = lcm;
    }
    *pNumerator = A - C;
    *pDenominator = D;
    if ( *pDenominator == 0 )
    {
        printf ( "Denominator can't be less than  0" );
        return ;
    }
    while ( 1 )
    {
        if (*pNumerator % *pDenominator == 0){
            *pNumerator /= *pDenominator;
        } else if (*pDenominator % *pNumerator == 0 ){
            *pDenominator /= *pNumerator;
        }
        if ( *pNumerator % gcd == 0 && *pDenominator % gcd == 0 )
        {
            *pNumerator /= gcd;
            *pDenominator /= gcd;
            gcd = 2;
        }
        else
        {
            gcd ++;
            if ( gcd == 11 )
            {
                break;
            }
        }
    }
}
