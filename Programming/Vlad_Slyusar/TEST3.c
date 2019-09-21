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
    scanf ( "%[^\n]%*c",  words  );
    printf("%s\n", words);
    scanf ( "%[^\n]%*c",  newWord );
    printf("%s\n", newWord);
    //printf ("%[^\n]s%\n", words);
    //strcpy(temp, newWord);

    getch();
    return 0;
}
