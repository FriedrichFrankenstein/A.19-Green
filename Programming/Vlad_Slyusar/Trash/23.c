#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 80
int main()
{
    char *str = (char*) calloc ( sizeof ( char ), MAX );
    char temp;
    int i = 0;
    printf ( "Input string: " );
    gets ( str );
    printf ( "You`ve input: " );
    while ( i != MAX - 1 )
    {
        temp = * ( str + i );
        if ( temp == 0 ) break;
        printf ( "%c", temp );
        i++;
    }
    free(str);
    return 0;
}

