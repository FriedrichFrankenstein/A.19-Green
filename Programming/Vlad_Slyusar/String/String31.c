#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 15




int main(){
    int i, lengthS, j;
    char *S = malloc(30) ;
    char *S1  = malloc(10);
    printf("Enter S: ");
    gets(S);
    printf("Enter S1: ");
    gets(S1);
    if ( strstr (S, S1) == 0){
        printf("FALSE");
    } else {
    printf("TRUE");
    }
    free(S);
    free(S1);
    getch();
    return 0;
}


//            memmove(S[i+ 1 + strlen(S1)], S[i+1], strlen(S1));
//            strcpy(S[i+1], S1);
