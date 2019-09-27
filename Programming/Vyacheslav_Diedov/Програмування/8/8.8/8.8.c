#include <stdio.h>
#include <conio.h>

typedef struct
{
    char name[20];
    char city[20];
    int place;
} Club;

int main()
{
    int i;
    Club club;
    Club* p;
    p = &club;
    FILE *binar = fopen ( "teams.dat", "wb");
    freopen ( "teams.dat", "ab", binar);
    for ( i = 0; i < 7; i++)
    {

        printf("Input club name - \n");
        scanf("%s", club.name);
        printf("Input club city - \n");
        scanf("%s", club.city);
        printf("Input club place - \n");
        scanf("%d", &club.place);
        fwrite ( &club, sizeof(club), 1, binar );
    }
    FILE *mybinar = fopen("teams1.dat", "wb");
    fclose(binar);
    fopen("teams.dat", "rb");
    for( i = 0; i < 3; i++)
    {
        fread ( &club, sizeof(club), 1, binar );
        fwrite ( &club, sizeof(club), 1, mybinar );
    }
    fclose( binar );
    freopen( "teams1.dat", "rb" , mybinar);
    for ( i = 0; i < 3; i++)
    {
        fread ( &club, sizeof(club), 1, mybinar );
        printf("\nteam1Club name %s, city - %s , place - %i", club.name, club.city, club.place);
    }
    fclose(mybinar);
    return 0;
}
