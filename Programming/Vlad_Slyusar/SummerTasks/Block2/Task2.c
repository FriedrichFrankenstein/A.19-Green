#include <stdio.h>
#include <conio.h>
#include <math.h>

int cif3 ( int min, int max );

void getEachNumber ( char *pNum1, char *pNum2, char *pNum3, int min );

void getStartNum ( char *pNum1, char *pNum2, char *pNum3, int min );

int main()
{
    int max, min;
    printf ( "Enter min and max value: " );
    scanf ( "%i %i", &min, &max );
    if ( max > 1000 || min > 1000 || min < 1 || max < 102){
        printf("Wrong value");
    } else {
        printf("Number of three-digit numbers without repetition of numbers: %i",cif3 ( min, max ));
    }
    getch();
    return 0;
}

int cif3 ( int min, int max )
{
    int temp, counter = 0;
    char num1 = 49, num2 = 49, num3 = 49;
    char *pNum1 = &num1, *pNum2 = &num2, *pNum3 = &num3;
    getStartNum ( pNum1, pNum2, pNum3, min );
    while ( 1 )
    {
        temp = ( ( *pNum1 - 48 ) * 100 ) + ( ( *pNum2 - 48 ) * 10 ) + ( *pNum3 - 48 );
        if ( num1 != num2 && num2 != num3 && num3 != num1 )
        {
            printf ( "%i\n", temp );
            counter++;
        }
        if ( num3 == '9' )
        {
            num3 = '0';
            num2 += 1;
            if ( num2 == 58 )
            {
                num2 = '0';
                num1 += 1;
                continue;
            }
            continue;
        }
        num3++;
        if ( temp >= max )
        {
            break;
        }
    }
    return counter;
}

void getEachNumber ( char *pNum1, char *pNum2, char *pNum3, int min )
{
    int temp;
    *pNum1 = 49, *pNum2 = 49, *pNum3 = 49;
    while ( 1 )
    {
        if ( ( *pNum1 - 48 ) * 100 <= min )
        {
            *pNum1 += 1;
        }
        else
        {
            *pNum1 -= 1;
            break;
        }
    }
    while ( 1 )
    {
        if ( ( ( *pNum1 - 48 ) * 100 ) + ( ( *pNum2 - 48 ) * 10 )  <= min )
        {
            *pNum2 += 1;
        }
        else
        {
            *pNum2 -= 1;
            break;
        }
    }
    while ( 1 )
    {
        if ( ( ( *pNum1 - 48 ) * 100 ) + ( ( *pNum2 - 48 ) * 10 ) + ( *pNum3 - 48 ) <= min )
        {
            *pNum3 += 1;
        }
        else
        {
            *pNum3 -= 1;
            break;
        }
    }
}

void getStartNum ( char *pNum1, char *pNum2, char *pNum3, int min )
{
    if ( min <= 100 )
    {
        *pNum1 = '1';
        *pNum2 = '0';
        *pNum3 = '0';
    }
    else
    {
        getEachNumber ( pNum1, pNum2, pNum3, min );
    }
}
