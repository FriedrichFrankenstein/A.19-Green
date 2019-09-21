#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




int main(){
    int N1, N2, i = 0, flag = 0, j = 0;
    printf("Enter N1 and N2: ");
    scanf("%i%i", &N1, &N2);
    char *string1 = malloc(1);
    char *string2 = malloc(1);
    printf("Enter string1: ");
    while (1){
        string1 [i] = getch();
        printf("%c", string1[i]);
        if (string1 [i] == 13){
            string1 = realloc(string1 ,_msize(string1) - 1);
            break;
        }
        string1 = realloc(string1 ,_msize(string1) + 1);
        i++;
    }
    i = 0;
    printf("\nEnter string2: ");
    while (1){
        string2 [i] = getch();
        printf("%c", string2[i]);
        if (string2 [i] == 13){
           string2 = realloc(string2 ,_msize(string2) - 1);
            break;
        }
        string2 = realloc(string2 ,_msize(string2) + 1);
        i++;
    }
    printf("\nstring 1 = %c\n", string1[4]);
    char *string3 = calloc( N1 + N2, 1);
    for ( i = 0; i < N1 + N2; i++){
        if ( i < N1){
            string3[i] = string1[i];
        } else {
            string3[i] = string2[_msize(string2)- N2 + j];
            j++;
        }
    }
    printf("\n");
    for (i  = 0; i < N1 + N2; i++){
        printf("%c", string3[i]);
    }
    getch();
    free(string1);
    free(string2);
    free(string3);
    return 0;
}


