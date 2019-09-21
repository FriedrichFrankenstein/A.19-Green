#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void printString ( char *str );

int myStrlen ( char *str);

int myStrcmp ( char *str0, char *str1);

int myStrncmp ( char *str0, char *str1, int number);

char* myStrcat (char *str1, char *str2 );


int main(){
    char *str1 = "Vlad";
    char *str2 = "Max";
   // printf("%i\n", myStrcmp(str1, str2));
    //printf("%i", myStrncmp(str1, str2, 50));
//    printString(string);
//    printf("%i", myStrlen(str1));
//    str1 = myStrcat(str1, str2);
//    printf("%s", str1);
    printf ("Name : %s, age = %i", "Dmitrii", 30);
    //sprintf("Name : %s, age = %i", "Dmitrii", 30);

    getch();
    return 0;
}

void printString ( char *str ){
    str [1] = 'i';
    printf("%s\n", str);

}

int myStrlen ( char *str){
    int i = 0;
    while (str [i] != 0){
        i++;
    }
    return i;
}

int myStrcmp ( char *str0, char *str1){
    int i = 0;
    for (i = 0; i < myStrlen (str0) ||  i < myStrlen (str1); i++ ) {
        if (str0[i] > str1 [i]){
            return 1;
        } else if (str0[i] < str1 [i]){
            return -1;
        }
    }
    return 0;

}

int myStrncmp ( char *str0, char *str1, int number){
    int i = 0;
    int length = myStrlen(str0) >  myStrlen(str1) ? myStrlen(str0) : myStrlen(str1);
    for (i = 0; i < number && i < length ; i++){
        if (str0[i] > str1 [i]){
            return str0[i] - str1 [i];
        } else if (str0[i] < str1 [i]){
            return str0[i] - str1 [i];
        }
        }

    return 0;

}

char* myStrcat (char *str1, char *str2){

    int length = myStrlen(str1), i, lengthAll = myStrlen(str1) + myStrlen(str2), j = 0;
    char *str3 = (char *) malloc(lengthAll + 1);
    for ( i = 0 ; i < length; i++){
                str3[i] = str1[i];
    }
    for (;i < lengthAll; j++, i++){
        str3[i] = str2[j];
    }
    str3[i] = 0;
    return str3;

}


