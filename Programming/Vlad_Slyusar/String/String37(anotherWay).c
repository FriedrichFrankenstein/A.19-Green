#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int i;
    char *S = (char *) calloc ( 30, 1 ) ;
    char *S1  = (char *) calloc ( 10, 1 );
    char *S3 = (char *) calloc ( 10, 1 );
    char tempAdd;
    char *temp;
    printf ( "Enter S: " );
    gets ( S );
    printf ( "Enter S1: " );
    gets ( S1 );
    printf ( "Enter S3: " );
    gets ( S3 );

    for ( i = 0; i < strlen ( S ) ; i ++ )
    {
        if ( strstr ( S + i, S1 ) != 0 )
        {
            printf ( "%p\n", strstr( S + i , S1 ) );
            if (strstr( S + i , S1 ) == 0 ){
                break;
            }
           temp = strstr( S + i , S1 );

        }
    }
    tempAdd = *(temp + strlen(S3));
    strcpy(temp, S3);
    *(temp + strlen(S3)) = tempAdd;
    S [strlen(S)] = 0;
    puts(S);
    free ( S );
    free ( S1 );
    free ( S3 );
    getch();
    return 0;
}

