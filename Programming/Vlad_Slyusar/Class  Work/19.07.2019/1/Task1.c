#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>

void readFile ( char nameFile [] );

void updateFile ();

void deleteFile ();

void createFile ();

int main()
{
    char nameFile [20] = "input.txt";
    //  FILE * output = fopen("output.txt", "w");
    readFile ( nameFile );
    createFile (nameFile);
    int i = 0, flag = 0;
    char string [7][20] ;
//    fclose(input);
    //  fclose(output);
    getch();
    return 0;
}

void readFile ( char nameFile [] )
{
    FILE* pInput = fopen ( nameFile, "r" );
     char name [40], color [40];
    int id, year;
    while (fscanf(pInput, "%i %s %i %s", &id, name, &year, color) != EOF){
       printf("id = %i %s %i %s\n", id, name, year, color);
    }
    fclose(pInput);
}

void createFile (char nameFile []){
    FILE * pOutput = fopen(nameFile, "r");
    char temp;
    int counter = 0, id;
    while (fscanf(pOutput, "%c", &temp) != EOF){
        if (temp == '\n') counter++;

    }
    printf("%i", counter);
    id = counter + 1;
    freopen(nameFile, "a", pOutput);
    //fprintf(pOutput, "\n4 SCANIA 1996 black");
    fclose(pOutput);

}

