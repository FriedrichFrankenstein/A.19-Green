#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

void amountOfOne ( char string [], int regimeOfWork );

void shortestWord ( char string [][20], int regimeOfWork );

int isPolindrom ( char string [] );

void maxVowelsInWord ( char string [][20], int regimeOfWork );

void turnWordsInString ( char string [], int regimeOfWork );

void toUpperCase ( char string [] );

float greatFormula ( int x );

int main()
{
    char signOff ;
    int choise, regimeOfWork = 0, i;
    FILE *input;
    FILE *output;
    char stringTask1 [90] = "one, two, one hundred, twenty one, one thousand";
    char stringTask2 [4][20] = {"responsibility", "charge", "liability", "amenability"};
    char stringTask3 [90];
    char stringTask4 [5][20] = {"animal", "load", "reason", "early", "dream"};
    char stringTask5 [90] = "HTML is the standard markup language for Web pages.";
    char stringTask6 [90];
    char stringTask7 [4][20] ;
    char stringTask8 [90];
    char stringTask9 [5][20] ;
    char stringTask10 [90] ;
    do
    {
        printf ( "Enter which task do you want to check: " );
        scanf ( "%i", &choise );
        fflush ( stdin );
        switch ( choise )
        {
        case 1:
        {
            regimeOfWork = 0;
            amountOfOne ( stringTask1, regimeOfWork );
            break;
        }
        case 2:
        {
            regimeOfWork = 0;
            shortestWord ( stringTask2, regimeOfWork );
            break;
        }
        case 3:
        {
            printf ( "Enter string: " );
            gets ( stringTask3 );
            printf ( "Result: %i\n",  isPolindrom ( stringTask3 ) );
            break;
        }
        case 4:
        {
            regimeOfWork = 0;
            maxVowelsInWord ( stringTask4, regimeOfWork );
            break;
        }
        case 5:
        {
            regimeOfWork = 0;
            turnWordsInString ( stringTask5, regimeOfWork );
            break;
        }
        case 6:
        {
            input = fopen ( "inputTask6.txt", "r" );
            fgets ( stringTask6, 90, input );
            regimeOfWork = 1;
            amountOfOne ( stringTask6, regimeOfWork );
            fclose ( input );
            break;
        }
        case 7:
        {
            input = fopen ( "inputTask7.txt", "r" );
            for ( i = 0; i < 4; i++ )
            {
                fscanf ( input, "%s", stringTask7[i] );
            }
            regimeOfWork = 1;
            shortestWord ( stringTask7, regimeOfWork );
            fclose ( input );
            break;
        }
        case 8:
        {
            input = fopen ( "inputTask8.txt", "r" );
            output = fopen ( "resultFile.txt", "w" );
            fgets ( stringTask8, 90, input );
            fprintf ( output,  "Result: %i",  isPolindrom ( stringTask8 ) );
            fclose ( input );
            fclose ( output );
            break;
        }
        case 9:
        {
            input = fopen ( "inputTask9.txt", "r" );
            for ( i = 0; i < 5; i++ )
            {
                fscanf ( input, "%s", stringTask9[i] );
            }
            regimeOfWork = 1;
            maxVowelsInWord ( stringTask9, regimeOfWork );
            fclose ( input );
            break;
        }
        case 10:
        {
            input = fopen ( "inputTask10.txt", "r" );
            fgets ( stringTask10, 90, input );
            regimeOfWork = 1;
            turnWordsInString ( stringTask10, regimeOfWork );
            fclose ( input );
            break;
        }
        case 11:
        {
            for ( i = 1; i <= 10; i++ )
            {
                if ( i == 2 || i == 0 )
                {
                    printf ( "Function doesn't have result!\n" );
                    continue;
                }
                printf ( "y %i = %.2f\n", i,  greatFormula ( i ) );
            }
            break;
        }
        case 12:
        {
            output = fopen ( "resultFile.txt", "w" );
             fprintf ( output, "||       X       ||                  Y                   ||\n"
                      "||_______________||______________________________________||\n");
            for ( i = 1; i <= 10; i++ )
            {
                if ( i == 2 || i == 0 )
                {
                    fprintf ( output, "||      %2i       ||     Function doesn't have result     ||\n"
                              "||_______________||______________________________________||\n", i,  greatFormula ( i ) );
                    continue;
                }
                fprintf ( output, "||      %2i       ||         %22.2f       ||\n"
                          "||_______________||______________________________________||\n", i,  greatFormula ( i ) );
            }
            fclose ( output );
            break;
        }
        default:
        {
            printf ( "Wrong task!\n" );
            break;
        }
        }
        printf ( "If you don't want to try again press Esc, if want press another key\n" );
        signOff = getch();
    }
    while ( signOff != 27 );
    getch ();
    return 0;
}

void amountOfOne ( char string [], int regimeOfWork )
{
    //Дана строка. Вывести количество повторений подстроки “one”. Если подстрока не встретилась вернуть -1.
    int counter = 0, i = 0;
    char *temp;
    FILE *output;
    while ( 1 )
    {
        temp = strstr ( string + i, "one" );
        if ( temp != 0 )
        {
            counter++;
            i = temp - string + 3;
        }
        else
        {
            break;
        }
    }
    if ( regimeOfWork == 0 )
    {
        if ( counter == 0 )
        {
            printf ( "-1" );
        }
        else
        {
            printf ( "Amount of \"one\" in string = %i\n", counter );
        }
    }
    else
    {
        output = fopen ( "resultFile.txt", "w" );
        if ( counter == 0 )
        {
            fprintf ( output, "-1" );
            fclose ( output );
        }
        else
        {
            fprintf ( output, "Amount of \"one\" in string = %i", counter );
            fclose ( output );
        }
    }
}

void shortestWord ( char string [][20], int regimeOfWork )
{
    //Дан массив строк. Вывести самое короткое слово
    int i, minLength = 10000;
    FILE *output;
    for ( i = 0; i < 4; i++ )
    {
        if ( minLength > strlen ( string[i] ) )
        {
            minLength = strlen ( string[i] );
        }
    }
    if ( regimeOfWork == 0 )
    {
        for ( i = 0; i < 4; i++ )
        {
            if ( strlen ( string[i] ) == minLength )
            {
                printf ( "%s\n", string[i] );
                break;
            }
        }
    }
    else
    {
        output = fopen ( "resultFile.txt", "w" );
        for ( i = 0; i < 4; i++ )
        {
            if ( strlen ( string[i] ) == minLength )
            {
                fprintf ( output, "%s", string[i] );
                break;
            }
        }
        fclose ( output );
    }
}

int isPolindrom ( char string [] )
{
    //Ввести с консоли строку. Проверить является ли строка палиндромом. Пробелы не учитывать.
    //Если да вернуть 1, если нет 0

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

void maxVowelsInWord ( char string [][20], int regimeOfWork )
{
//    Дан массив слов.
//    Вывести слово в котором больше всего гласных букв.
//     Если таких слов несколько вывести их в алфавитном порядке.
    char vowels [] = {'a', 'e', 'i', 'o', 'u', 'y'};
    char temp [20];
    FILE *output;
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
    if ( regimeOfWork == 0 )
    {
        for ( i = 0; i < 5; i++ )
        {
            if ( amountVowels[i] == maxVowels )
            {
                printf ( "%s\n", string [i] );
            }
        }
    }
    else
    {
        output = fopen ( "resultFile.txt", "w" );
        for ( i = 0; i < 5; i++ )
        {
            if ( amountVowels[i] == maxVowels )
            {
                fprintf ( output, "%s\n", string [i] );
            }
        }
        fclose ( output );
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

void turnWordsInString ( char string [], int regimeOfWork )
{
    //Развернуть каждое слово в строке и вывести в верхнем регистре.
    toUpperCase ( string );
    FILE *output;
    int i, j = 0, k = 0;
    char tempString [30][20], temp, length;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        if ( string [i] < 'A' || string [i] > 'Z' )
        {
            tempString [j][k] = 0;
            j++;
            k = 0;
            continue;
        }
        tempString [j][k++] = string[i];
    }
    length = j;
    for ( i = 0; i < length; i++ )
    {
        for ( j = 0; j < strlen ( tempString[i] ) / 2 ; j++ )
        {
            temp = tempString [i][j];
            tempString [i][j] = tempString [i][strlen ( tempString[i] ) - j - 1];
            tempString [i][strlen ( tempString[i] ) - j - 1] = temp;
        }
    }
    if ( regimeOfWork == 0 )
    {
        for ( i = 0; i < length; i++ )
        {
            printf ( "%s ", tempString[i] );
        }
    }
    else
    {
        output = fopen ( "resultFile.txt", "w" );
        for ( i = 0; i < length; i++ )
        {
            fprintf ( output, "%s ", tempString[i] );
        }
        fclose ( output );
    }
    printf ( "\n" );
}

float greatFormula ( int x )
{
    float y ;
    y = ( ( pow ( 2, ( fabs ( 4 * x - 6 ) ) ) ) -
         ( pow ( 4, ( fabs ( 3 * x - 4 ) ) ) ) +
         ( pow ( x, 2 ) ) + ( pow ( 2, x ) ) * x - 4 * x ) /
         ( ( pow ( 2, x ) ) * x - 4 * x );
    return y;
}
