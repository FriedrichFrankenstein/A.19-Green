#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

/*Данная программа это калькулятор, который переводит число любой системы исчисления
(на выбор пользывателя), которое вводится с клавиатуры, в любую другую систему исчисления
( которую пользыватель также может выбрать). */

void decToAnother ( int number, int result [], int *pcounter, int selectedSystem );

void printNum ( int result [], int *pcounter );

int getNumber ( int originSystem );



int main ()
{
    int arrayLength = 0, *result, i;
    float tempNumber;
    char offSign;
    int counter = 0, *pcounter = &counter, origingNum, selectedSystem, originSystem ;
    do
    {
        printf ( "Choose origin system of numbers (2 - bin; 10 - dec; 8 - oct; 16 - hex): " );
        scanf ( "%i", &originSystem );
        printf ( "Choose system for transformation: " );
        scanf ( "%i", &selectedSystem );
        origingNum = getNumber ( originSystem );
        tempNumber = origingNum;
        while ( tempNumber > 255 )
        {
            tempNumber /= 2;
            arrayLength ++;
        }
        result = ( int * ) calloc ( arrayLength + 8, 4 );
        switch ( selectedSystem )
        {
        case 10 :
        {
            printf ( "Result: %i", origingNum );
            break;
        }
        case 2:
        case 8:
        case 16:
        {
            decToAnother ( origingNum,  result, pcounter, selectedSystem );
            printNum ( result, pcounter );
            free ( result );
            break;
        }
        default:
        {
            printf ( "Wrong type of system: " );
            return 0;
        }
        }
        printf ( "\nIf you want to try again, press 1; if no, another number:\n " );
        offSign = getch();
    }
    while ( offSign == '1' );
    return 0;
    getch();
}

int getNumber ( int originSystem )
{
    int originNum, num, *originArray, i = 0, arrayLength = 8, numPow, sum = 0, counter = 0;
    originArray = ( int * ) malloc ( 4 );
    char a;
    switch ( originSystem )
    {
    case 10:
    {
        printf ( "Enter dec number: " );
        scanf ( "%i", &originNum );
        return originNum;
    }
    case 2:
    case 8:
    case 16:
    {
        printf ( "Enter your number in selected system( if you done press q to exit): " );
        while ( 1 )
        {
            a = getch();
            if ( a == 'q' || a == 'Q' )
            {
                break;
            }
            num = a;
            if ( num > 47 && num < 58 )
            {
                arrayLength += 4;
                originArray = ( int * ) realloc ( originArray, arrayLength );
                if ( originArray == NULL )
                {
                    printf ( "\nNo memory\n" );
                    return 1;
                }
                originArray [i] = a - 48;
                printf ( "%i", originArray [i] );
                i++;
                counter += 1;
            }
            else if ( num > 64 && num < 71 )
            {
                arrayLength += 4;
                originArray = ( int * ) realloc ( originArray, arrayLength );
                if ( originArray == NULL )
                {
                    printf ( "\nNo memory\n" );
                    return 1;
                }
                originArray [i] = a - 55 ;
                printf ( "%c", a );
                i++;
                counter += 1;
            }
            else if ( num > 96 && num < 103 )
            {
                arrayLength += 4;
                originArray = ( int * ) realloc ( originArray, arrayLength );
                if ( originArray == NULL )
                {
                    printf ( "\nNo memory\n" );
                    return 1;
                }
                originArray [i] = a - 87 ;
                printf ( "%c", a );
                i++;
                counter += 1;
            }
            else
            {
                printf ( "You typed wrong number!" );
            }
        }
        break;
    }
    default:
    {
        printf ( "Wrong type of system!" );
        return 1;
    }
    }
    printf ( "\n" );
    numPow = counter - 1;
    for ( i = 0; i < counter; i++ )
    {
        originArray [i] =  originArray [i] * pow ( originSystem, numPow );
        numPow --;
        sum += originArray[i];
    }
    free ( originArray );
    return sum;
}

void decToAnother ( int number, int result [], int *pcounter, int selectedSystem )
{
    int a, i = 0;
    int nothing = number;
    while ( nothing > 0 )
    {
        result [i] =  nothing % selectedSystem;
        nothing /= selectedSystem;
        i++;
        *pcounter += 1;
    }
}


void printNum ( int result [], int *pcounter )
{
    int i;
    printf ( "Result: " );
    for ( i = *pcounter - 1; i >= 0; i-- )
    {
        switch ( result [i] )
        {
        case 10:
        {
            printf ( "A" );
            break;
        }
        case 11:
        {
            printf ( "B" );
            break;
        }
        case 12:
        {
            printf ( "C" );
            break;
        }
        case 13:
        {
            printf ( "D" );
            break;
        }
        case 14:
        {
            printf ( "E" );
            break;
        }
        case 15:
        {
            printf ( "F" );
            break;
        }
        default:
        {
            printf ( "%i", result[i] );
        }
        }
    }
    *pcounter = 0;
}
