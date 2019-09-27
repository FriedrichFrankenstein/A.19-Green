#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <mem.h>

typedef struct
{
    char name[20];
    char city[20];
    int place;
} Club;

int main()
{
    Club club1, club2;
    Club *p1, *p2;
    p1 = &club1;
    p2 = &club2;
    int i;
    FILE *binar = fopen ( "teams.dat", "wb");
    freopen ( "teams.dat", "ab", binar);
    for ( i = 0; i < 7; i++)
    {
        printf ("%i club name city place \n", i + 1 );
        scanf("%s %s %i", club1.name, club1.city, &club1.place);
        strcpy (p2->name, p1->name);
        strcpy(p2->city, p1->city);
        p2->place = p1->place;
        fwrite ( &club2, sizeof(club2), 1, binar);
    }
    fclose(binar);
    fopen("teams.dat", "rb");
    for( i = 0; i < 7; i++)
    {
        fread(&club2, sizeof(club2), 1, binar);
        printf("Club name - %s, club city - %s, club place - %i\n", club2.name, club2.city, club2.place);
    }
    fclose(binar);
    
	fopen ( "teams.dat", "wb");
    freopen ( "teams.dat", "ab", binar);
    for ( i = 0; i < 7; i++)
    {
        printf ("%i club name city place \n", i + 1 );
        scanf("%s %s %i", club1.name, club1.city, &club1.place);
    	memcpy(p2, p1, sizeof(club1));
        fwrite ( &club2, sizeof(club2), 1, binar);
    }
    fclose(binar);
    fopen("teams.dat", "rb");
    for( i = 0; i < 7; i++)
    {
        fread(&club2, sizeof(club2), 1, binar);
        printf("Club name - %s, club city - %s, club place - %i\n", club2.name, club2.city, club2.place);
    }
    fclose(binar);
	
	fopen ( "teams.dat", "wb");
    freopen ( "teams.dat", "ab", binar);
    for ( i = 0; i < 7; i++)
    {
        printf ("%i club name city place \n", i + 1 );
        scanf("%s %s %i", club1.name, club1.city, &club1.place);
        club2 = club1;
        fwrite ( &club2, sizeof(club2), 1, binar);
    }
    fclose(binar);
    fopen("teams.dat", "rb");
    for( i = 0; i < 7; i++)
    {
        fread(&club2, sizeof(club2), 1, binar);
        printf("Club name - %s, club city - %s, club place - %i\n", club2.name, club2.city, club2.place);
    }
    fclose(binar);
    
    return 0;
}

