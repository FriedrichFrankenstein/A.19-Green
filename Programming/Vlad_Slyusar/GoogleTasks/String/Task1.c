#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 11

void reversit ( char * string);

int main(){
    char *string = ( char *) calloc(N, 1);
    char *newString = (char *) calloc(50, 1);
    int flag = 0;
    do {
            printf("Enter number (10 numbers): ");
            gets(string);
            puts(string);
            if ( strlen(string) >= N-1){
                flag = 1;
            }

    } while ( flag == 0);
    printf("New string ( max 50 chars) : ");
    gets (newString);
    reversit(newString);
    puts(newString);
    free(newString);
    free(string);
    getch();
    return 0;
}

void reversit ( char * string){
    int i;
    char temp;
    for ( i = 0; i < strlen ( string ) / 2; i ++ )
    {
        temp = string[i];
        string[i] =  string[strlen ( string ) - i - 1] ;
        string[strlen ( string ) - i - 1] = temp;
    }


}

