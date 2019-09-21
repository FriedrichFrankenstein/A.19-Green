#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
    char name [20];
    char city [20];
    int place;
    int score;
} Club;



int main()
{
    Club *teams;
    int n;
    do{
    printf("Enter number of clubs (max 10): ");
    scanf("%i", &n);
    }while(n < 1 || n > 10);
    teams = (Club*) calloc(sizeof(Club), n);
    int i;
    for (i = 0; i < n; i++){
        printf("Enter date for team %i(name, place): ", i + 1);
        scanf("%s %i", (teams + i)->name, &(teams + i)->place );
    }
    for (i = 0; i < n; i++){
        printf("%s %s %i %i\n", (teams + i)->name, (teams + i)->city, (teams + i)->place, (teams + i)->score);
    }
    free(teams);
    getch();
    return 0;
}

