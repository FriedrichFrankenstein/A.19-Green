#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char city[20];
    int place;
} Club;

int main()
{
    Club club1, club2;
    FILE *binar = fopen ( "teams.dat", "wb");
    Club *p1, *p2;
    p1 = &club1;
    p2 = &club2;
    binar = freopen ( "teams.dat", "ab", binar);
    int i;
    for ( i = 0; i < 7; i++)
    {
        printf ("%i club name city place \n", i + 1 );
        scanf("%s %s %i", club1.name, club1.city, &club1.place);
        printf ("Club name - %s, club city - %s, club place - %i\n", club1.name, club1.city, club1.place);
        p2->name = p1->name;
        p2->city = p1->city;
        p2->place = p1->place;
        fwrite ( &p2, sizeof(club1), 1, binar);
    }
    fclose(biner);
    fopen("teams", "rb");
    for( i = 0; i < 7; i++)
    {
        fread(&club2, sizeof(club1), 1, binar);
        printf("Club name - %s, club city - %s, club place - %i\n", club1.name, club1.city, club1.place);
    }
    fclose(binar);
    return 0;
}
