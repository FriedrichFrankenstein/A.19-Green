#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	char city[20];
	int place;
}Club; 

int main(){
	Club club;
	FILE *f, *f1;
	f = fopen("teams.dat", "ab");
	int i;
	for(i=0; i<7; i++){
		puts("Input club name");
		gets(club.name);
		puts("Input club city");
		gets(club.city);
		puts("Input place");
		scanf("%i", &club.place);
		fflush(stdin);
		fseek(f, (i)*sizeof(Club), SEEK_SET);
		fwrite(club.name, sizeof(char)*20, 1, f);
		fwrite(club.city, sizeof(char)*20, 1, f);
		fwrite(&club.place, sizeof(int), 1, f);
	}
	freopen("teams.dat", "rb", f);
	f1 = fopen("teams1.dat", "ab");
	for(i=0; i<3; i++){
	 	fseek(f, (i)*sizeof(Club), SEEK_SET);
    	fread(club.name, sizeof(char)*20, 1, f);	
    	fread(club.city, sizeof(char)*20, 1, f);		
    	fread(&club.place, sizeof(int), 1, f);	
		fseek(f, (i)*sizeof(Club), SEEK_SET);
		fwrite(club.name, sizeof(char)*20, 1, f1);
		fwrite(club.city, sizeof(char)*20, 1, f1);
		fwrite(&club.place, sizeof(int), 1, f1);
		printf("%i - %s - %s\n", club.place, club.name, club.city);
	}
	printf("\n");
	freopen("teams1.dat", "rb", f1);
	for(i=0; i<3; i++){
	 	fseek(f, (i)*sizeof(Club), SEEK_SET);
    	fread(club.name, sizeof(char)*20, 1, f);	
    	fread(club.city, sizeof(char)*20, 1, f);		
    	fread(&club.place, sizeof(int), 1, f);	
    	printf("%i - %s - %s\n", club.place, club.name, club.city);
	}
	fclose(f1);
	fclose(f);
	return 0;
}
