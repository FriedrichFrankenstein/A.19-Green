#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char city[20];
    int score;
} Club;

int main()
{
    int n, i, j;
    printf ("Imput number clubs for read - ");
    scanf ("%i", &n);
    Club club;
    Club* pc;
    pc = (Club*) malloc ( n * sizeof(Club));
    FILE *text = fopen ("Club.txt", "r");
    for( i = 0; i < n; i++)
    {
        if( fscanf ( text, "%s %s %i", &(pc + i)->name, &(pc + i)->city, &(pc + i)->score) == EOF)
            break;
        printf("%s %s %i\n", (pc + i)->name, (pc + i)->city, (pc + i)->score);
    }
    n = i;
    for ( i = n-1; i >= 0; i--)
    {
        for (j = n-1; j >= 0; j--)
        {
            if ((pc + i)->score < (pc + j)->score)
            {
            club = *(pc + i);
            *(pc + i) = *(pc + j);
            *(pc + j) = club;
            }
        }
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%s %s %i\n", (pc + i)->name, (pc + i)->city, (pc + i)->score);
    }
    FILE* mybinare;
    mybinare = fopen("final.dat", "wb");
    for ( i = n - 1; i >= 0; i--)
    {
    	fwrite((pc + i), sizeof(club), 1, mybinare);
	}
    freopen("final.dat", "rb", mybinare);
    int n_club;
    printf("\nInput score club - ");
    scanf("%i", &n_club);
    fseek (mybinare, sizeof(club) * (n_club - 1), SEEK_SET);
    fread (&club, sizeof(club), 1, mybinare);
    printf("Club %s, city %s, score %i", club.name, club.city, club.score);
    fclose(mybinare);
    return 0;
}
