#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int id =4;

void readFile(char fileName[]);

void updateFile();

void deleteFile();

void createFile();

int main(){
	readFile("resource.txt");
updateFile( fileName[]);
	
	
	
	
}

void readFile(char fileName[]){
	FILE* pInput = fopen("resource.txt", "r");
	 int i, j;
	 char buffer[256];
		while(fgets(buffer, 256, pInput) != NULL){
		printf("%s", buffer);
		i = 0;
/*		while(buffer[i] != '\n'){
			printf("%c", buffer[i++]);
		}*/
	}
	fflush(stdin);
	fclose(pInput);	
}

void updateFile( char fileName[]){
	FILE* pOutput = fopen(fileName,"a");
    char name[20];
    int year;
    char color[20];
    printf("Input avto: ");
    scanf("%s", name);
    printf("Input year: ");
    scanf("%i", &year);
    printf("Input color: ");
    scanf("%s", color);
    fprintf(pOutput, "\n%i %s %i %s\n", id++, name, year, color);
    fflush(stdout);
    fclose(pOutput);
	
}
