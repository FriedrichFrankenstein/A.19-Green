#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name [20];
    char city [20];
    int place;
} Club;

void datCopy ( Club *teams, int n );

void datSort ( Club *teams, int n );

void copyToFile ( Club *teams, int n );

void checkBinFile (int n);

int main()
{
    int i = 0, n;
    do
    {
        printf ( "Enter number of clubs for reading: " );
        scanf ( "%i", &n );
    }
    while ( n < 1 || n > 10 );
    Club *teams = ( Club* ) calloc ( 44, n );
    datCopy ( teams, n );
    datSort ( teams, n );
    copyToFile ( teams, n );
    checkBinFile ( n);
    free ( teams );
    getch();
    return 0;
}

void datCopy ( Club *teams, int n )
{
    int i = 0;
    FILE *input = fopen ( "input.txt", "r" );
    while ( fscanf ( input, "%s %s %i", & ( teams + i )->name, & ( teams + i )->city, & ( teams + i )->place ) != EOF && i < n )
    {
        i++;
    }
    fclose ( input );
}

void datSort ( Club *teams, int n )
{
    int i, j, max = 0;
    Club temp;
    for ( i = 0; i < n; i++ )
    {
        max = i;
        for ( j = 0 + i; j < n; j++ )
        {
            if ( ( teams + j )->place > ( teams + max )->place )
            {
                max = j;
            }
        }
        temp = * ( teams + max );
        * ( teams + max ) = * ( teams + i );
        * ( teams + i ) = temp;
    }
    for (i = 0; i < n; i ++){
        printf("%s %s %i\n",  ( teams + i )->name,  ( teams + i )->city,  ( teams + i )->place);
    }
}

void copyToFile ( Club *teams, int n )
{
    FILE *output = fopen ( "output.dat", "wb" );
    int i;
    for ( i = 0; i < n; i++ )
    {
        fwrite ( ( teams + i ), sizeof ( int ), 11, output );
    }
    fclose ( output );
}

void checkBinFile (int n)
{
    int n_club;
    Club temp;
    FILE *read = fopen ( "output.dat", "rb" );
    do
    {
        printf ( "Enter number of club: " );
        scanf ( "%i", &n_club );
    }
    while ( n_club < 1 || n_club > n );
    fseek ( read, 44 * ( n_club - 1 ), SEEK_SET );
    fread ( &temp, sizeof ( int ), 11, read );
    printf ( "Result: team - %s; town - %s; place - %i", temp.name, temp.city, temp.place );
    fclose ( read );
}
