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
    int n, i;
    do
        {
    printf("Input number clubs - ");
    scanf("%i", &n);
        }while( n > 10);
    Club *pClub;
    pClub = (Club*) calloc(sizeof(Club), n);
    for (i = 0; i < n; i++)
    {
        printf ("Input club name, city, place\n");
        scanf ("%s %s %i", &(pClub + i)->name, &(pClub + i)->city, &(pClub + i)->place);
    }
    for (i = 0; i < n; i++)
    {
        printf ("Club name %s, city %s, place %i, score %i\n", (pClub + i)->name, (pClub + i)->city, (pClub + i)->place, (pClub + i)->score);
    }
    return 0;
}
