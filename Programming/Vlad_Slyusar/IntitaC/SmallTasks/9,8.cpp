#include <iostream>

#include <cstdio>

#include <stdlib.h>

#include <string.h>

using namespace std;

typedef struct {
	char name [20] ;
	char city [20];
	int place;
	int score;
}Club;

void inputClub(char*, int*); 

void inputClub(char*, char*, int*); 

void inputClub(char*, char*, int*, int*);
 

int main()

{

	int N, i, j, max = 0, plac;
	do{	
	printf("Enter number of teams: ");
	scanf ("%i", &N);
	} while (N < 5);
	Club * teams = (Club*) calloc (sizeof(Club), N);
	Club * teams1 = (Club*) calloc (sizeof(Club), N);
	Club temp;
	for (i = 0; i < N; i++){
		inputClub ((teams + i)->name, &(teams + i)->score);
	}
	for (i = 0; i < N; i++){
		inputClub ((teams + i)->name, (teams + i)->city, &(teams + i)->score);
	}
	for (i = 0; i < N; i++){
		inputClub ((teams + i)->name, (teams + i)->city, &(teams + i)->score,  &(teams + i)->place);
		*(teams1 + i) = *(teams + i);
	}
	for (i = 0; i < N; i++){
		max = (teams1 + i)->score;
		plac = i;
		for (j = i  ; j < N; j++){
			if ((teams1 + j)->score > max ){
				max = (teams1 + j)->score;
				plac = j;
			}
		}
		temp = *(teams1 + plac);
		*(teams1 + plac) = *(teams1 + i);
		*(teams1 + i) = temp;
		(teams1 + i)->place = i + 1;
	}
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			if (strcmp ((teams + i)->name, (teams1 + j)->name) == 0 ){
				(teams + i)->place = (teams1 + j)->place;
			
			}
		}
	}
	for (i = 0; i < N; i++){
		printf("Team - %s; City - %s; Score - %i; Place - %i\n", (teams + i)->name, (teams + i)->city, (teams + i)->score, (teams + i)->place);
	}
	free (teams);
	free (teams1);
	getchar();
	return 0;

}

void inputClub(char* name, int* score){
	printf("Enter name of team and number of score: ");
	scanf("%s %i", name, score);
}

void inputClub(char* name, char* city, int* score){
	printf("Team - %s; score - %i\nEnter city of team: ", name, *score);
	scanf("%s", city);
	
}

void inputClub(char* name, char* city, int* score, int* place){
		printf("Team - %s; City - %s; Score - %i\n", name, city, *score);
}
