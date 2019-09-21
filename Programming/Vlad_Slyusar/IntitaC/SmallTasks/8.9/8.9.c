#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct
{
    char name [20];
    char city [20];
    int place;
} Club;

int main()
{
    Club club1, club2, *pClub1 = &club1, *pClub2 = &club2;
    int i;
    FILE *team = fopen ( "teams.dat", "ab" );
    char choice;
    printf ( "Enter method of copy (1 - pointer; 2 - memcpy; 3 - reassignment) :\n" );
    do
    {
        choice = getch();
    }
    while ( choice < '1' || choice > '3' );
    switch ( choice )
    {
    case '1':
    {
        for ( i = 0; i < 7; i++ )
        {
            printf ( "Enter name, city, place: " );
            scanf ( "%s %s %i", club1.name, club1.city, &club1.place );
            strcpy ( pClub2 ->name, pClub1 ->name );
            strcpy ( pClub2 ->city, pClub1 ->city );
            pClub2 ->place =  pClub1 ->place;
            fwrite ( &club2, sizeof ( int ), 11, team );
        }
        break;
    }
    case '2':
    {
         for ( i = 0; i < 7; i++ )
        {
            printf ( "Enter name, city, place: " );
            scanf ( "%s %s %i", club1.name, club1.city, &club1.place );
            memcpy(pClub2, pClub1, 44);
            fwrite ( &club2, sizeof ( int ), 11, team );
        }
        break;
    }
    case '3':
    {
         for ( i = 0; i < 7; i++ )
        {
            printf ( "Enter name, city, place: " );
            scanf ( "%s %s %i", club1.name, club1.city, &club1.place );
            club2 = club1;
            fwrite ( &club2, sizeof ( int ), 11, team );
        }
        break;
    }
    default:
        break;
    }
    freopen ( "teams.dat", "rb", team );
    for ( i = 0; i < 7; i++ )
    {
        fread ( &club1, sizeof ( int ), 11, team );
        printf ( "Team = %s; city = %s; place = %i\n", club1.name, club1.city, club1.place );
    }
    fclose ( team );
    getch();
    return 0;
}
