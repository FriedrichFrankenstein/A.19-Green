#include <stdio.h>
#include <conio.h>
#include <math.h>

double power ( double number, int power )
{
    int power1 = fabs(power), i;
    double temp = number;
    for ( i = 1; i < power1 ; i++ )
    {
        number *= temp;
    }
    if ( power > 0){
        return number;
    } else {
        return 1/number;
    }
    return number;
}
int main ()
{
    int  pow;
    double number, result;
    printf ( "Enter number and pow: " );
    scanf ( "%lf%i", &number, &pow );
    result = power ( number, pow );
    printf ( "Result: %g", result );
    getchar();
    return 0;
}
