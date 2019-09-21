#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define N 15




int main(){
    int i, lengthS, j;
    char S [100]  = "asdfdsfa";
    char S1 [10]  = "SDF";
    char C = 'a';
    lengthS = strlen(S);

    for (i = 0; i < lengthS; i++){
        if ( S[i] == C){
            for (j = 0; j < strlen(S1); j++){
                S[i+1+j] = S1 [j];
            }
            i += strlen(S1);
        }
    }
    S[i] = 0;
    puts(S);
    getch();
    return 0;
}


//            memmove(S[i+ 1 + strlen(S1)], S[i+1], strlen(S1));
//            strcpy(S[i+1], S1);
