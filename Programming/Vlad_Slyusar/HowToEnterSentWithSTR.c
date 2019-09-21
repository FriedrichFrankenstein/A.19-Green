#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char words [40] = "WORLD";
    char newWord[40] ;
    char temp [40];
    gets(words);
    printf("%s\n", words);
    scanf ( "%[^\n]%*c",  newWord );
    //fflush(newWord);
    printf("%s\n", newWord);
    //printf ("%[^\n]s%\n", words);
    //strcpy(temp, newWord);
    //fflush () видалення мусору
    getch();
    return 0;
}
