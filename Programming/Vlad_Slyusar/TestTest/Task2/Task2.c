#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>



int main()
{
    int i, flag = 0;
    char temp [20];
    char string [7][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for ( i = 0; i < 6; )
    {
        if ( string[i][0] >= 'A' && string[i][0] <= 'Z' )
        {
            string [i][0] += 32;
        }
        if ( strcmp ( string[i], string[i + 1] ) == 1 )
        {
            flag = 1;
            strcpy ( temp, string[i] );
            strcpy ( string[i], string[i + 1] );
            strcpy ( string[i + 1], temp );
        }
        i++;
        if ( flag == 1 )
        {
            flag = 0;
            i = 0;
        }
    }
    for (i =0; i < 7; i++){
        puts(string[i]);
    }
    getch();
    return 0;
}




