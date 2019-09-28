#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

enum Restyle
{
    PLACE,
    SCORE
};

typedef union
{
    int place;
    int score;
} Results ;

typedef struct
{
    char name [20];
    char city [20];
    enum Restyle info;
    Results results;
} Club;

int main()
{
    Club *clubs;
    int num, i;
    printf ( "Enter number of clubs: " );
    scanf ( "%i", &num );
    clubs = ( Club * ) calloc ( sizeof ( Club ), num );
    do
    {
        printf ( "Enter the value of info: " );
        scanf ( "%i", &clubs->info );
    }
    while ( clubs->info < 0 || clubs->info > 1 );
    switch ( clubs->info )
    {
    case ( PLACE ) :
    {
        for ( i = 0; i < num; i++ )
        {
            printf ( "Enter place of team %i: ", i + 1 );
            scanf ( "%i", & ( clubs + i ) ->results.place );
        }
        break;
    }
    case ( SCORE ) :
    {
        for ( i = 0; i < num; i++ )
        {
            printf ( "Enter score of team %i: ", i + 1 );
            scanf ( "%i", & ( clubs + i ) ->results.score );
        }
        break;
    }
    default:
    {
        break;
    }
    }
    for ( i = 0; i < num; i++ )
    {
        printf ( "Enter name of club and town: " );
        scanf ( "%s %s", ( clubs + i )->name, ( clubs + i )->city );
    }
    for ( i = 0; i < num; i++ )
    {
        printf ( "%s %s %i\n", ( clubs + i )->name, ( clubs + i )->city, ( clubs + i ) ->results.score );
    }
    return 0;
}

