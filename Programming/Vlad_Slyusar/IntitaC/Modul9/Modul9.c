#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name [20];
    char city [20];
    int place;
    int score;
} Clubs;

void fillStruct ( FILE *input, char* name, char* city, int* score );

void fillStruct ( FILE *input, char* name, char* city, int* score, int* place );

void fillStruct ( FILE *input, char* name, int* place );

int main()
{
    int i, N = 1, n = 1;
    char fileName [30], temp;
    do
    {
        printf ( "Enter the name of file: " );
        scanf ( "%s", fileName );
    }
    while ( strcmp ( fileName, "clubs2.txt" ) != 0 && strcmp ( fileName, "clubs1.txt" ) != 0  && strcmp ( fileName, "clubs3.txt" ) != 0 );
    FILE *input = fopen ( fileName, "r" );
    while ( fscanf ( input, "%c", &temp ) != EOF )
    {
        if ( temp == '\n' )
        {
            N++;
        }
    }
    Clubs *team = ( Clubs* ) calloc ( sizeof ( Clubs ), N );
    rewind ( input );
    do
    {
        fscanf ( input, "%c", &temp );
        if ( temp == ' ' )
        {
            n++;
        }
    }
    while ( temp != '\n' );
    rewind ( input );
    switch ( n )
    {
    case 3:
    {
        for ( i = 0; i < N; i++ )
        {
            fillStruct ( input, ( team + i ) -> name, ( team + i ) -> city, & ( team + i ) -> score );
            printf ( "%s %s %i\n", ( team + i ) -> name, ( team + i ) -> city, ( team + i ) -> score );
        }
        break;
    }
    case 4:
    {
        for ( i = 0; i < N; i++ )
        {
            fillStruct ( input, ( team + i ) -> name, ( team + i ) -> city, & ( team + i ) -> score, & ( team + i ) -> place );
            printf ( "%s %s %i %i\n", ( team + i ) -> name, ( team + i ) -> city, ( team + i ) -> score, ( team + i ) -> place );
        }
        break;
    }
    case 2:
    {
        for ( i = 0; i < N; i++ )
        {
            fillStruct ( input, ( team + i ) -> name, & ( team + i ) -> place );
            printf ( "%s %i\n", ( team + i ) -> name, ( team + i ) -> place );
        }
        break;
    }
    }
    free ( team );
    fclose ( input );
    return 0;
}

void fillStruct ( FILE *input, char* name, char* city, int* score )
{
    fscanf ( input, "%s %s %i", name, city, score );
}

void fillStruct ( FILE *input, char* name, char* city, int* score, int* place )
{
    fscanf ( input, "%s %s %i %i", name, city, score, place );
}

void fillStruct ( FILE *input, char* name, int* place )
{
    fscanf ( input, "%s %i", name, place );
}
