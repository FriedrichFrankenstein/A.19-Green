#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>



int main()
{
    int i;
    FILE *fp = fopen ( "input.txt", "r" );
    for (i = 0; i < 15; i++){
            char *word  =  fscant ( fp );
            puts(word);
    }
    fclose ( fp );
    getch();
    return 0;
}

char* fscant ( FILE *fp )
{
    char *string = ( char * ) calloc ( 1, 1 );
    char temp;
    int i = 0;
    while ( 1 )
    {
        if ( fscanf ( fp, "%c", &temp ) != EOF  )
        {
            string = realloc ( string, _msize ( string ) + 1 );
            if ( temp == ' ' || temp == ',' || temp == '!' || temp == '.' || temp == ';' || temp == ':' || temp == '\n'   )
            {
                string [i] = 0;
               if ( strlen (string) < 2){
                    string = realloc ( string, 1 );
                    i = 0;
                    continue;
               }
                return string;
            }
            string [i] = temp;
            i++;
        }
        else
        {
            if (_msize ( string ) > 1 ){
                string [i] = 0;
                return string;
            }
            return 0;
        }
    }
}



