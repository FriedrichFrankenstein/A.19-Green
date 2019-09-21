#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>



int main()
{
    FILE* input = fopen ("input.txt", "r");
    FILE * output = fopen("output.txt", "w");
    int i = 0, flag = 0;
    char temp [100];
    char string [7][20] ;
    while ( 1){
    if (fscanf(input, "%s", string[i]) == EOF) break;
        i++;
    }
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
        fprintf(output, "%s\n", string[i]);
    }
    fclose(input);
    fclose(output);
    getch();
    return 0;
}




