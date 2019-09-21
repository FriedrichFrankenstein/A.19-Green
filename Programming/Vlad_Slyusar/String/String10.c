#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 15




int main(){
    int i;
    char *string = calloc(N, sizeof(char));
    gets(string);
    for ( i = N - 1; i >= 0; i--){
        printf("%c", *(string + i));
    }
    free(string);
    getch();
    return 0;
}


