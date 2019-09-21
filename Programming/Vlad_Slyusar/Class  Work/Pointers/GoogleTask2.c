#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 5
#define M 15



int main()
{
    int i, j,  minValue = 0, temp = 0;
    char tempString [15];
    char words [N][M];
    int ascArray [N];
    for ( i = 0; i < N; i++ )
    {
        printf ( "Enter your word: " );
        scanf ( "%s", ( words + i ) );
    }
    for ( i = 0; i < N; i++ )
    {
        ascArray[i] = ( int ) * ( * ( words + i ) );
    }
    for ( i = 0; i < N - 1; i++ )
    {
        minValue = i;
        for ( j = i + 1; j < N; j++ )
        {
            if ( ascArray [j] < ascArray[minValue] )
            {
                minValue = j;
            }
        }
        temp = ascArray [i];
        ascArray[i] = ascArray [minValue];
        ascArray [minValue] = temp;
        strcpy ( tempString, * ( words + i ) );
        strcpy ( * ( words + i ), * ( words + minValue ) );
        strcpy ( * ( words + minValue ), tempString );
    }
    for ( i = 0; i < N; i++ )
    {
        printf ( "%s\n", * ( words + i ) );
    }
    getch();
    return 0;
}


