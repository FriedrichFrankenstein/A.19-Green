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
    Club var;
    int i;
    FILE *team2;
    FILE *team = fopen ( "teams.dat", "ab" );
    for ( i = 0; i < 7; i++ )
    {
        printf ( "Enter name, city, place: " );
        scanf ( "%s %s %i", var.name, var.city, &var.place );
        fwrite ( &var, sizeof ( int ), 11, team );
    }
    freopen ( "teams.dat", "rb", team );
    team2 = fopen ( "teams2.dat", "wb" );
    for ( i = 0; i < 3; i++ )
    {
        fread ( &var, sizeof ( int ), 11, team );
        fwrite ( &var, sizeof ( int ), 11, team2 );
    }
    freopen ( "teams2.dat", "rb", team2 );
    for ( i = 0; i < 3; i++ )
    {
        fread ( &var, sizeof ( int ), 11, team2 );
        printf ( "Team = %s; city = %s; place = %i\n", var.name, var.city, var.place );
    }
    fclose ( team );
    fclose ( team2 );
    getch();
    return 0;
}
