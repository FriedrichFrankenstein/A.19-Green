#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 30




int main(){
    int i, counter = 0;
    char *string = calloc(N, sizeof(char));
    gets(string);
    for ( i = 0; i < N; i++){
        if ( *(string + i) > 47 && *(string + i) < 58  ){
            counter++;
        }
    }
    printf("counter = %i", counter);
    free(string);
    getch();
    return 0;
}


