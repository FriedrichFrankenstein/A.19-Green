#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

void amountOfOne ( char string [] );

void shortestWord ( char string [][20] );

int isPolindrom ( char string [] );

void maxVowelsInWord ( char string [][20] );

void turnWordsInString ( char string [] );

void toUpperCase ( char string [] );

int main()
{
//    char stringTask1 [90] = "one, two, one hundred, twenty one, one thousand";
//    amountOfOne (stringTask1);
//    char stringTask2 [4][20] = {"responsibility", "charge", "liability", "amenability"};
//    shortestWord (stringTask2);
//    char stringTask3 [90];
//    gets ( stringTask3 );
//    printf ( "Result: %i",  isPolindrom ( stringTask3 ) );
//    char stringTask4 [5][20] = {"animal", "load", "reason", "early", "dream"};
//    maxVowelsInWord ( stringTask4 );
    char stringTask5 [90] = "HTML is the standard markup language for Web pages.";
    turnWordsInString ( stringTask5 );
    getch ();
    return 0;
}

void amountOfOne ( char string [] )
{
    int counter = 0, i = 0;
    char *temp;
    while ( 1 )
    {
        temp = strstr ( string + i, "one" );
        if ( temp != 0 )
        {
            counter++;
            i = temp - string + 3;
            printf ( "i = %i\n", i );
        }
        else
        {
            break;
        }
    }
    if ( counter == 0 )
    {
        printf ( "1" );
    }
    else
    {
        printf ( "Amount of \"one\" in string = %i", counter );
    }
}

void shortestWord ( char string [][20] )
{
    int i, minLength = 10000;
    for ( i = 0; i < 4; i++ )
    {
        if ( minLength > strlen ( string[i] ) )
        {
            minLength = strlen ( string[i] );
        }
    }
    for ( i = 0; i < 4; i++ )
    {
        if ( strlen ( string[i] ) == minLength )
        {
            printf ( "%s", string[i] );
            break;
        }
    }
}

int isPolindrom ( char string [] )
{
    int i;
    for ( i = 0; i < strlen ( string ) / 2; i++ )
    {
        if ( string [i] >= 'A' && string [i] <= 'Z' )
        {
            string[i] += 32;
        }
        if ( string [i] == ' ' || string[strlen ( string ) - ( i + 1 )] == ' ' )
        {
            continue;
        }
        if ( string [i] != string[strlen ( string ) - ( i + 1 )] )
        {
            return 0;
        }
    }
    return 1;
}

void maxVowelsInWord ( char string [][20] )
{
    char vowels [] = {'a', 'e', 'i', 'o', 'u', 'y'};
    char temp [20];
    int i, j, k, maxVowels = 0, flag = 0;
    int amountVowels [5] = {};
    for ( i = 0; i < 4; )
    {
        if ( strcmp ( string[i], string[i + 1] ) == 1 )
        {
            flag = 1;
            strcpy ( temp, string[i] );
            strcpy ( string[i], string[i + 1] );
            strcpy ( string[i + 1], temp );
        }
        i++;
        if ( flag == 1 )
        {
            flag = 0;
            i = 0;
        }
    }
    for ( i = 0; i < 5; i++ )
    {
        for ( j = 0; j < strlen ( string[i] ); j++ )
        {
            for ( k = 0; k < 6; k++ )
            {
                if ( string [i][j] == vowels[k] )
                {
                    amountVowels [i] ++;
                    break;
                }
            }
        }
        if ( maxVowels < amountVowels[i] )
        {
            maxVowels = amountVowels[i];
        }
    }
    for ( i = 0; i < 5; i++ )
    {
        if ( amountVowels[i] == maxVowels )
        {
            printf ( "%s\n", string [i] );
        }
    }
}



void toUpperCase ( char string [] )
{
    int i;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        if ( string [i] >= 'a' && string [i] <= 'z' )
        {
            string[i] -= 32;
        }
    }
}

void turnWordsInString ( char string [] )
{
    toUpperCase ( string );
    int i, j = 0, k = 0;
   // char tempString [9][20], temp;
    char temp;
    char **tempString = calloc (1, 1);
    tempString[0] = calloc (20, 1);
//    printf("LENGTH = %i", _msize(tempString[0]) );
//    tempString = realloc (tempString, _msize (tempString) + 1);
//    tempString[1] = calloc (20, 1);
//    printf("LENGTH = %i", _msize(tempString[1]) );
    //int numberOfWords =  sizeof(tempString) / 20;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        if ( string [i] < 'A' || string [i] > 'Z' )
        {
            tempString [j][k] = 0;
            tempString = realloc (tempString, _msize (tempString) + 1);
            j++;
            printf("%i", j);
            tempString [j] = calloc(20, 1);
            k = 0;
            continue;
        }
      //  printf("%c", tempString [j][k]);
        tempString [j][k++] = string[i];
    }
    printf("LENGTH = %i", _msize(tempString[6]) );
    int length = _msize(tempString);
//    for ( i = 0; i < length; i++ )
//    {
//        for ( j = 0; j < strlen ( tempString[i] ) / 2; j++ )
//        {
//            temp = tempString [i][j];
//            tempString [i][j] = tempString [i][strlen ( tempString[i] ) - j - 1];
//            tempString [i][strlen ( tempString[i] ) - j - 1] = temp;
//        }
//        tempString [i][j] = 0;
//    }
//printf ( "%s ", tempString[1] );
//    for ( i = 0; i < length; i++ )
//    {
//        printf ( "%s ", tempString[i] );
//    }
}
