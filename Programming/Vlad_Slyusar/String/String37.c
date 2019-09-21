#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int i, lengthS, j;
    char *S = calloc ( 30, 1 ) ;
    char *S1  = calloc ( 10, 1 );
    char *S3 = calloc ( 10, 1 );
    char *S4;
    char temp;
    printf ( "Enter S: " );
    gets ( S );
    printf ( "Enter S1: " );
    gets ( S1 );
    printf ( "Enter S3: " );
    gets ( S3 );
    for ( i = 0; i < strlen ( S ) / 2; i ++ )
    {
        temp = S[i];
        S[i] =  S[strlen ( S ) - i - 1] ;
        S[strlen ( S ) - i - 1] = temp;
    }
    puts ( S );
   char * tempForChar = (char *) strstr ( S, S1 );
//    if (  temp != 0 )
//    {
        printf("TRUE");
//        S4 = strstr ( S, S1 );
//        for ( j = 0; j < strlen ( S3 ); j++ )
//        {
//            * ( S4 + j ) = * ( S3 + j );
//        }
  //  }
    for ( i = 0; i < strlen ( S ) / 2; i ++ )
    {
        temp = S[i];
        S[i] =  S[strlen ( S ) - i - 1] ;
        S[strlen ( S ) - i - 1] = temp;
    }
    puts ( S );
    free ( S );
    free ( S1 );
    free ( S3 );
    free ( S4 );
    getch();
    return 0;
}


//            memmove(S[i+ 1 + strlen(S1)], S[i+1], strlen(S1));
//            strcpy(S[i+1], S1);
