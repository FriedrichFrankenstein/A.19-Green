#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#define N 10

int powFunction ( int number, int powNumber )
{
    int i, temp = number;
    if ( powNumber == 0 )
    {
        return 1;
    }
    for ( i = 1; i < powNumber; i ++ )
    {
        number *= temp;
    }
    return number;
}

void saveNumberOfNumberInArray ();

void createArray ();

void tranformWordIntoCharArray ();

void floatWholeFractional ();

void evenNumberInArray ();

void vowelsInTenLetters();

int main()
{
    srand ( time ( NULL ) );
    char choise = 0, offSign;
    do
    {
        printf ( "Choose task (1-6)\n" );
        choise = getch();
        switch ( choise )
        {
        case '1':
        {
            saveNumberOfNumberInArray();
            break;
        }
        case '2':
        {
            createArray();
            break;
        }
        case '3':
        {
            tranformWordIntoCharArray();
            break;
        }
        case '4':
        {
            floatWholeFractional();
            break;
        }
        case '5':
        {
            evenNumberInArray ();
            break;
        }
        case '6':
        {
            vowelsInTenLetters ();
            break;
        }
        default:
            printf ( "Wrong number" );
        }
        printf ( "\nIf you don't want to try again press Esc\n" );
        offSign = getch();
    }
    while ( offSign != 27 );
    getch();;
    return 0;
}

void saveNumberOfNumberInArray ()
{
    int number, i = 0, temp, lengthArray = 1, temp2;
    int *array = malloc ( lengthArray * 4 );
    printf ( "Enter your number: " );
    scanf ( "%i", &number );
    temp = number;
    while ( temp > 0 )
    {
        * ( array + i ) = temp % 10;
        temp /= 10;
        lengthArray += 1;
        array = realloc ( array,  lengthArray * 4 );
        i ++;
    }
    for ( i = 0; i < ( lengthArray - 1 ) / 2; i++ )
    {
        temp2 = array[i];
        array[i] = array[lengthArray - 2 - i];
        array[lengthArray - 2 - i] = temp2;
    }
    for ( i = 0; i < lengthArray - 1 ; i++ )
    {
        printf ( "%i", array[i] );
    }
    free ( array );
}

void createArray ()
{
    int lengthArray = rand() % 10;
    int *array = calloc ( lengthArray, sizeof ( int ) );
    printf ( "Length of array: %i", _msize ( array ) / 4 );
    free ( array );
}

void tranformWordIntoCharArray ()
{
    char string [20], string2 [20];
    printf ( "Enter your word: " );
    scanf ( "%s", string );
    fflush ( stdin );
    strcpy ( string2, string );
    printf ( "%s", string2 );
}

void floatWholeFractional ()
{
    float number;
    int i = 0, *resultArray, flag = 0, counterFract = -2, counterInt = -1;
    char *string = calloc ( 1, sizeof ( char ) );
    printf ( "Enter number: " );
    while ( 1 )
    {
        string [i] = getch();
        if ( string [i] == 13 )
        {
            break;
        }
        if ( string[i] == 46 )
        {
            flag = 1;
        }
        printf ( "%c", string[i] );
        string = realloc ( string, _msize ( string ) + 1 );
        if ( flag == 0 )
        {
            counterInt++;
        }
        else
        {
            counterFract++;
        }
        i++;
    }
    if ( counterFract > 0 )
    {
        resultArray = calloc ( 2, 4 );
    }
    else
    {
        resultArray = calloc ( 1, 4 );
    }
    flag = 0;
    for ( i = 0; i < _msize ( string ) - 1; i++ )
    {
        if ( string[i] == 46 )
        {
            flag = 1;
            continue;
        }
        if ( flag == 0 )
        {
            resultArray[flag] += ( string[i] - 48 ) * powFunction ( 10, counterInt ) ;
            counterInt--;
        }
        else
        {
            resultArray[flag] += ( string[i] - 48 ) * powFunction ( 10, counterFract );
            counterFract--;
        }
    }
    free ( string );
    if ( resultArray[1] == 0 )
    {
        printf ( "\nResult:\n%i", resultArray[0] );
    }
    else
    {
        printf ( "\nResult:\n%i\n%i", resultArray[0], resultArray[1] );
    }
    free ( string );
    free ( resultArray );
}

void evenNumberInArray ()
{
    int array [N], i, j = 0, *arrayAdd = malloc ( 4 );
    for ( i = 0; i < N; i++ )
    {
        array[i] = rand() % 11;
        printf ( "array [%i] = %i\n", i,  array[i] );
        if ( array[i] % 2 == 0 )
        {
            arrayAdd[j] = array[i];
            arrayAdd = realloc ( arrayAdd, _msize ( arrayAdd ) + 4 );
            j++;
        }
    }
    for ( i = 0; i < j; i++ )
    {
        printf ( "arrayAdd [%i] =  %i\n", i, arrayAdd[i] );
    }
    free ( arrayAdd );
}

void vowelsInTenLetters ()
{
    int i, j, askiVowels [6] = {65, 69, 73, 79, 85, 89}, k = 0;
    char *string = "afecfinaio";
    char *vowels = malloc ( 1 );
    for ( i  = 0; i < 10; i++ )
    {
        for ( j = 0; j < 6; j++ )
        {
            if ( string [i] == askiVowels[j] || string [i] == ( askiVowels[j] + 32 ) )
            {
                vowels [k] = string[i];
                vowels = realloc ( vowels, _msize ( vowels ) + 1 );
                printf ( "%c", vowels[k] );
                k++;
                break;
            }
        }
    }
    free ( string );
    free ( vowels );
}
