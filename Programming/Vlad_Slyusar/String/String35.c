#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int i, lengthS, j;
    char *S = calloc ( 30, 1 ) ;
    char *S1  = calloc ( 10, 1 );
    char *S3;
    printf ( "Enter S: " );
    gets ( S );
    printf ( "Enter S1: " );
    gets ( S1 );
    for (i = 0; i < strlen(S); i++){
        if ( strstr (S, S1) != 0){
            S3 = strstr (S, S1);
            for (j = 0; j < strlen(S1); j++){
                *(S3 + j) = '0';
            }
            i += strlen(S1) - 1;
        }
    }
    S[i] = 0;
    puts ( S );
    free ( S );
    free ( S1 );
    getch();
    return 0;
}


//            memmove(S[i+ 1 + strlen(S1)], S[i+1], strlen(S1));
//            strcpy(S[i+1], S1);
