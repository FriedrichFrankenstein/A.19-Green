#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
    char name [20];
    char city [20];
    int place;
    int score;
} Club;

typedef Club ClubNum;
typedef Club* ClubPoint;

int main()
{
    ClubNum clubArray [5];
    int i;
    for (i = 0; i < 5; i++){
        printf("Enter date for team %i: ", i + 1);
        scanf("%s %s %i %i", (clubArray + i)->name, (clubArray + i)->city, &(clubArray + i)->place, &(clubArray + i)->score);
    }
    ClubPoint clubArr = clubArray;
    for (i = 0; i < 5; i++){
        printf("%s %s %i %i\n", (clubArr + i)->name, (clubArr + i)->city, (clubArr + i)->place, (clubArr + i)->score);
    }
    getch();
    return 0;
}

