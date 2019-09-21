#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int isLetter ( char ch ); // letter - 1, else 0

int isDigit ( char dig ); //digit - 1, else 0

int isSymbol ( char symb ); //symbol - 1, else - 0 (.,;!?)

void toUpperCase ( char arr [] );

void toLowCase ( char arr [] );

int letterAmount ( char arr [] );

int symbolAmount ( char arr[] );

int wordsAmount ( char arr[] ); // words more than 2 letters

int length ( char arr [] );

int main()
{
    char arr [] = "The perfect solution "
                  "for professionals who "
                  "need to balance work, "
                  "family, and career "
                  "building. More than 25 000 "
                  "certificates already issued!";
    //printf("%i", isSymbol(arr[0]));
//    toLowCase ( arr );
//    puts ( arr );
    printf("%i", wordsAmount(arr));
    getch();
    return 0;
}

int isLetter ( char ch )
{
    return ( ( ch > 64 && ch < 91 ) || ( ch > 96 && ch < 123 ) ) ? 1  : 0;
}

int length ( char arr [] )
{
    int i = 0 ;
    while ( arr [i] != 0 )
    {
        i++;
    }
    return i;
}

int isDigit ( char dig )
{
    return ( dig > 47 && dig < 58 ) ? 1 : 0;
}

int isSymbol ( char symb )
{
    char symbols [] = ".,;!?";
    int i;
    for ( i = 0; i < sizeof ( symbols ); i++ )
    {
        if ( symb == symbols[i] )
        {
            return 1;
        }
    }
    return 0;
}

void toUpperCase ( char arr [] )
{
    int i;
    for ( i = 0; i < length ( arr ); i++ )
    {
        if ( arr[i] > 96 && arr[i] < 123 )
        {
            arr [i] -= 32;
        }
    }
    //puts(arr);
}

void toLowCase ( char arr [] )
{
    int i;
    for ( i = 0; i < length ( arr ); i++ )
    {
        if ( arr [i] > 64 &&  arr [i] < 91 )
        {
            arr [i] += 32;
        }
    }
}

int letterAmount ( char arr [] )
{
    int i, count = 0;
    for ( i = 0; i < length ( arr ); i ++ )
    {
        if ( ( arr[i] > 64 && arr[i] < 91 ) || ( arr[i] > 96 && arr[i] < 123 ) )
        {
            count ++;
        }
    }
    return count;
}

int symbolAmount ( char arr [] )
{
    int i, count = 0, j;
    char symbols [] = ".,;!?";
    for ( i = 0; i < length ( arr ); i ++ )
    {
        for ( j = 0; j < sizeof ( symbols ); j++ )
        {
            if ( arr [i] == symbols[j] )
            {
                count ++;
            }
        }
    }
    return count;
}

int wordsAmount ( char arr[] ){
    int i, a, flag, words = 0;
    for (i = 0; i < length(arr); i++){
        if (isLetter(arr[i]) == 0 && flag > 2 ){
            words++;
            flag = 0;
        }
        if ( isLetter(arr[i]) == 1 ){
            flag++;
        }
    }
    return words;

}
