#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char name [20];
    char city [20];
    int score;
} Club;


int main()
{
    FILE *input = fopen ( "input.txt", "r" );
    int i, n, j, max, place;
    do
    {
        printf ( "enter number of clubs: " );
        scanf ( "%i", &n );
    }
    while ( n < 1 || n > 10 );
    Club *team = ( Club* ) calloc ( sizeof ( Club ), n );
    Club temp;
    for ( i = 0; i < n; i++ )
    {
        fscanf ( input, "%s %s %i",  ( team + i )->name,  ( team + i ) ->city, & ( team + i )->score );
    }
    for ( i = 0; i < n; i ++ )
    {
        max = ( team + i )->score;
        for ( j = i; j < n; j++ )
        {
            if ( ( team + j )->score >= max )
            {
                max = ( team + j )->score;
                place = j;
            }
        }
        temp = * ( team + i );
        * ( team + i ) = * ( team + place );
        * ( team + place ) = temp;
    }
    for ( i = 0; i < n; i++ )
    {
        printf ( "%s %s %i\n", ( team + i )->name, ( team + i ) ->city, ( team + i )->score );
    }
    FILE *output = fopen ( "output.dat", "wb" );
    for ( i = 0; i < n; i++ )
    {
        fwrite ( ( team + i ), sizeof ( Club ), 1, output );
    }
    int n_club;
    do
    {
        printf ( "Enter number of club: " );
        scanf ( "%i", &n_club );
    }
    while ( n_club < 1 || n_club > n );
    freopen ( "output.dat", "rb", output );
    fseek ( output, sizeof ( Club ) * ( n_club - 1 ), SEEK_SET );
    fread ( &temp, sizeof ( Club ), 1, output );
    printf ( "%s %s %i\n", temp.name, temp.city, temp.score );
    getch();
    free(team);
    fclose(output);
    return 0;
}

