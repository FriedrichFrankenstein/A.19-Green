#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

int isCharChar ( char ch){
    if ( (ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') ){
        return 1;
    }
    else {
        return 0;
    }
}

void numOfWords (char string []){
    int i, counter = 0;
    for (i = 0; i < 99; i++){
        if (*(string + i) == 32 && *(string + i + 1) != 32){
            counter++;
        }
    }
    printf(" words = %i", counter);

}

int checkSymbol (char ch) {
    int i;
    char arr [7] = "aoieuy";
    for (i = 0; i < 6; i++){
        if ( arr[i] == ch){
            return 1;
        }
    }
    return 0;
}

void check (char string [], char characters){
    int i,  counter = 0;
    for (i = 0; i < 100; i++){
        if ( *(string + i) == characters){
            counter ++;
        }
    }
    printf("counter = %i", counter);
}

int main()
{
    int i, flag = 0, counter = 0, words = 0;
    char string[100] = "HTML is the  standard, ghhhj    markup    language for Web pages";
    char characters;
    //numOfWords(string);
    for (i = 0; i < 100; i++){
        if (isCharChar(string[i])){
            counter++;
        }
         if ( !isCharChar(string[i])){
            counter = 0;
        }
        if (counter == 3){
            words ++;
        }


    }
    printf("words = %i", words);

    /*
    for ( i = 0; i < 100; i++){
        if (checkSymbol(string[i])){
            counter ++;
        }
    }*/
    //printf(" counter = %i", counter);
   /* while (1){
    scanf("%c", &characters);
    fflush(stdin);
    check(string, characters);
    }*/
    getch();
    return 0;
}
