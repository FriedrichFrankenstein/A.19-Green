#include <stdio.h>
#include <conio.h>
#include <string.h>



int main()
{
    char S [15] = "Task2";
    int N, i;
    printf("Enter your number: ");
    scanf("%i", &N);
    fflush(stdin);
    FILE *newFile;
    newFile = fopen( S, "w");
    for ( i = 2; i < N*2+2; i += 2){
         fprintf(newFile, "%i  ", i);
    }
    fclose(newFile);
    getch();
    return 0;
}
