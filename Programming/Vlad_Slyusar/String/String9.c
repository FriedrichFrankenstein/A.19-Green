#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>





int main(){
    int i, j ;
    char string[3][20] = {"pen", "cup", "brains"};
    char use [] = "use";
    char words [3][20] ;
    for (i = 0; i < 3; i++){
        sprintf ( words [i], "%s %s", "use", string[i]);
        strcpy(string[i], words[i]);
        puts (string [i]);
    }
    puts (string [1]);
    getch();
    return 0;
}


