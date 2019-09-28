#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char city[20];
    int place;
    int score;
} Club;


int main()
{
    int n, i, j;
    do
    {
        printf("Input number clubs - ");
        scanf("%i", &n);
    }
    while( n > 10);
    Club *pClub;
    Club club;
    pClub = (Club*) malloc(sizeof(Club)* n);
    for (i = 0; i < n; i++)
    {
        printf ("Input club name, city, place, score\n");
        scanf ("%s %s %i %i", &(pClub + i)->name, &(pClub + i)->city, &(pClub + i)->place, &( pClub + i)->score);
    }
    for (i = 0; i < n; i++)
    {
        printf ("Club name %s, city %s, place %i, score %i\n", (pClub + i)->name, (pClub + i)->city, (pClub + i)->place, (pClub + i)->score);
    }
    Club *pClub2;
    pClub2 = (Club*) calloc (sizeof(Club), n);
    pClub2 = pClub;
    pClub = (Club*) realloc (pClub, (n - 2) * sizeof(Club));
    for ( i = 0; i < n; i++ )
    {
        for( j = 0; j < n; j++)
        {
            if ((pClub2 + i)->place < (pClub2 + j)->place)
            {
                club = *(pClub2 + i);
                *(pClub2 + i) = *(pClub2 + j);
                *(pClub2 + j) = club;
            }
        }
    }
    printf("\nFinal result\n");
    for ( i = 0; i < (n - 2); i++)
    {
        *(pClub + i) = *(pClub2 + i);
        printf ("Club name %s, city %s, place %i, score %i\n", (pClub + i)->name, (pClub + i)->city, (pClub + i)->place, (pClub + i)->score);
    }
    return 0;
}
