#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Club
{
    char name[20];
    char city[20];
    int place;
    int score;
};

typedef struct Club club, *pclub;

int main()
{
    int n, i;
    printf("Input number - ");
    scanf("%i", &n);
    club data[n];
    pclub p= (club*) malloc ( n * sizeof(club));
    for (i = 0; i < n; i++)
    {
        printf ("Input club name, city, place, score\n");
        scanf ("%s %s %i %i", &data[i].name, &data[i].city, &data[i].place, &data[i].score);
    }
    p = data;
    for (i = 0; i < n; i++)
    {
        printf ("Club name %s, city %s, place %i, score %i\n", (p + i)->name, (p + i)->city, (p + i)->place, (p + i)->score);
    }
    return 0;
}
