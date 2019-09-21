#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




int main()
{
    char *string1 = calloc(50, 1);
    char *string2 = calloc(15, 1);
    char *temp;
    int i, position1, position2;
    printf("Enter string 1:");
    gets (string1);
    printf("Enter string 2:");
    gets (string2);
    position1 = strstr(string1, string2) - string1;
    for (i = 0; i < _msize(string1); i++){
            if (strstr(string1 + i, string2) != 0){
                position2 = strstr(string1 + i, string2) - string1 ;
            }
    }
    //position2 = temp - string1;
    printf("first position : %i ; last position  : %i", position1, position2 );
    free(string1);
    free(string2);
    getch();
    return 0;
}

