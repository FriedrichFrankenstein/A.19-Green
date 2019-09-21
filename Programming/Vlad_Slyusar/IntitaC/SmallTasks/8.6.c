#include <stdio.h>
#include <conio.h>

typedef struct
{
    char name [20];
    char city [20];
    int place;
} Club;

int main()
{
    Club A[7];
    int i, j;
    for ( i = 0; i < 7; i++ )
    {
        printf ( "Input the name of %i club: ", i + 1 );
        scanf ( "%s", A[i].name );
        printf ( "Input the city of %i club: ", i + 1 );
        scanf ( "%s", A[i].city );
        printf ( "Input place in the championship of %i club: ", i + 1 );
        scanf ( "%i", &A[i].place );
        printf ( "Club %i: %s from %s took the place %i\n", i + 1, A[i].name, A[i].city, A[i].place );
    }
    for ( i = 1; i <= 7; i++ )
        for ( j = 0; j < 7; j++ )
            if ( A[j].place == i )
            {
                printf ( "Place %i took club %s from %s\n", i + 1, A[j].name, A[j].city );
            }
    getch();
    return 0;
}
