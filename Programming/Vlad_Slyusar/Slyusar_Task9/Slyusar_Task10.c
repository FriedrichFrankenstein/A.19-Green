#include <stdio.h>
#include <conio.h>
#include <string.h>


void onlyLowCaseLetters ( char str1 [] );

void startWithSome ( char word[][11] );

void changeFirstAndLastLetter ( char word[] );

void startWithVowel ( char words [][20] );

void deleteAllVowels ( char word [] );

void toUppercase ( char string [] );

void deleteSymbolsAndNumbers ( char string [] );

void asciPlus5 ( char string [] );

void reversString ( char string [] );

void addUseBeforWords ( char string [][20] );

void changeSomeToAny ( char string [] );

void amountOfRepeatOfLetters ( char string [] );

int main()
{
    char flag;
    int choise;
    char stringTask1 [50] = "asdASDzxcZXCqwertQWERT,.!-";
    char stringTask2[5][11] = {"something", "soup", "sometime", "somber", "somehow"};
    char stringTask3[] = "Hello";
    char stringTask4[5][20] = {"animal", "load", "reason", "early", "dream"};
    char stringTask5 [20] = "competition";
    char stringTask6 [50] = "sorry for interrupting";
    char stringTask7 [50] = "I,- will= do/* my4 be~st!";
    char stringTask8 [50] = "Query";
    char stringTask9 [50] = "STOP";
    char stringTask10 [5][20] =  {"pen", "cup", "brains" };
    char stringTask11 [50] =  "something someone cool awesome";
    char stringTask12 [50] =  "communication";
    do
    {
        printf ( "Enter task (1 - 12): " );
        scanf ( "%i", &choise );
        switch ( choise )
        {
        case 1:
        {
            onlyLowCaseLetters ( stringTask1 );
            break;
        }
        case 2:
        {
            startWithSome ( stringTask2 );
            break;
        }
        case 3:
        {
            changeFirstAndLastLetter ( stringTask3 );
            break;
        }
        case 4:
        {
            startWithVowel ( stringTask4 );
            break;
        }
        case 5:
        {
            deleteAllVowels ( stringTask5 );
            break;
        }
        case 6:
        {
            toUppercase ( stringTask6 );
            break;
        }
        case 7:
        {
            deleteSymbolsAndNumbers ( stringTask7 );
            break;
        }
        case 8:
        {
            asciPlus5 ( stringTask8 );
            break;
        }
        case 9:
        {
            reversString ( stringTask9 );
            break;
        }
        case 10:
        {
            addUseBeforWords ( stringTask10 );
            break;
        }
        case 11:
        {
            changeSomeToAny ( stringTask11 );
            break;
        }
        case 12:
        {
            amountOfRepeatOfLetters ( stringTask12 );
            break;
        }
        default:
        {
            printf ( "Wrong task" );
            break;
        }
        }
        printf ( "If you don't want to try again press Esc, if want press another key.\n" );
        flag = getch();
    }
    while ( flag != 27 );
    getch();
    return 0;
}

void onlyLowCaseLetters ( char str1 [] )
{
    //Дана строка. Вывести только латинские литеры в нижнем регистре.
    char str2 [40] ;
    int i, j  = 0;
    for ( i = 0; i < strlen ( str1 ); i++ )
    {
        if ( str1[i] > 96 && str1[i] < 123 )
        {
            str2 [j] = str1 [i];
            j++;
        }
    }
    str2 [j] = 0;
    puts ( str2 );
}

void startWithSome ( char word[][11] )
{
    //Дан массив строк. Вывести строки начинающиеся на “some”.
    int i;
    for ( i = 0; i < 5; i++ )
    {
        if ( strstr ( word[i], "some" ) == * ( word + i ) )
        {
            puts ( * ( word + i ) );
        }
    }
}

void changeFirstAndLastLetter ( char word[] )
{
    //Дана строка. Заменить первую и последнюю литеру на цифру 5.
    int lastLetter;
    lastLetter = strlen ( word ) - 1;
    word [0] = '5';
    word [lastLetter] = '5';
    puts ( word );
}

void startWithVowel ( char words [][20] )
{
    // Дан массив строк. Вывести строки начинающиеся на гласную.
    int i, j;
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};
    for ( i = 0; i < 5; i ++ )
    {
        for ( j = 0; j < 5; j ++ )
        {
            if ( * ( * ( words + i ) ) == vowels [j] )
            {
                puts ( words [i] );
            }
        }
    }
}

void deleteAllVowels ( char word [] )
{
    //Дана строка. Убрать все гласные буквы.
    char str [20];
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};
    int i, j, flag = 0, k;
    for ( i = 0; i < strlen ( word ); i++ )
    {
        for ( j = 0; j < 5; j ++ )
        {
            if ( word [i] == vowels [j] )
            {
                flag = 1;
                break;
            }
        }
        if ( flag == 0 )
        {
            printf ( "%c", word [i] );
            k++;
        }
        flag = 0;
    }
    printf ( "\n" );
}

void toUppercase ( char string [] )
{
    //Дана строка в нижнем регистре. Перевести в верхний регистр.
    int i;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        if ( string [i] > 96 && string [i] < 123 )
        {
            string [i] -= 32;
        }
    }
    puts ( string );
}

void deleteSymbolsAndNumbers ( char string [] )
{
    //Дана строка. Убрать все знаки и цифры.
    int i, j = 0;
    char tempString [50] ;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        if ( ( string [i] > 96 && string [i] < 123 ) || ( string [i] >= 'A' && string [i] <= 'Z' ) || string [i] == ' ' )
        {
            tempString [j] = string [i];
            j++;
        }
    }
    tempString [j] = 0;
    puts ( tempString );
}

void asciPlus5 ( char string [] )
{
    //Дана строка. Вернуть строку все символы ASCI код символов которой отличаются от данной на 5.
    int i;
    for ( i = 0; i < strlen ( string ); i++ )
    {
        string [i] += 5;
    }
    puts ( string );
}

void reversString ( char string [] )
{
    //Дана строка. Написать функцию revers для разворота строки.
    int i;
    char temp;
    for ( i = 0; i < strlen ( string ) / 2; i ++ )
    {
        temp = string [i];
        string [i] = string [strlen ( string ) - 1 - i];
        string [strlen ( string ) - 1 - i] = temp;
    }
    puts ( string );
}

void addUseBeforWords ( char string [][20] )
{
    //Дан массив строк. Добавить перед каждым словом "use"
    int i;
    char words [3][20];
    for ( i = 0; i < 3; i++ )
    {
        sprintf ( words [i], "%s %s", "use", string[i] );
        strcpy ( string[i], words[i] );
        puts ( string [i] );
    }
}

void changeSomeToAny ( char string [] )
{
    // Дана строка. Заменить в строке "some" на  "any"
    int i ;
    char *adressOnSome;
    for ( i = 0; i < strlen ( string ); i ++ )
    {
        adressOnSome = strstr ( string, "some" );
        if ( adressOnSome != 0 )
        {
            adressOnSome = strstr ( string, "some" );
            strcpy ( adressOnSome, "any" );
            strcpy ( adressOnSome + 3, adressOnSome + 4 );
        }
    }
    string[i] = 0;
    puts ( string );
}

void amountOfRepeatOfLetters ( char string [] )
{
    //Дана строка. Определить частоту повторяемости букв в строке
    int amountLetter [26] = {}, i;
    for ( i = 0; i < 26; i++ )
    {
        amountLetter [ string [i] - 97] ++;
    }
    for ( i = 0 ; i < 26; i++ )
    {
        if ( amountLetter [i] != 0 )
        {
            printf ( "%c - %i\n", i + 97, amountLetter[i] );
        }
    }
}
