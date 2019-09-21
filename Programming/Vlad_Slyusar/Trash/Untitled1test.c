#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    char string [10] ;
    scanf ("%s", string);
    int number = strlen (string);
    printf ("%i\n", number);
    printf ("%c", string [10]);
    puts (string);
getch();
return 0;

}
