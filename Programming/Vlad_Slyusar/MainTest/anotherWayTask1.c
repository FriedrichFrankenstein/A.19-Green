#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>

void divBy3 ( FILE *fp );

int main()
{
    FILE* input = fopen ( "input.txt", "r" );
    divBy3 ( input );
    getch();
    return 0;
}

void divBy3 ( FILE *fp )
{
    FILE* output = fopen ( "resultTask1.txt", "w" );
    char symbol;
    long long int number;

    while ( fscanf ( fp, "%lli", &number ) != EOF )
    {
        printf("%i", number % 3);
        if ( number % 3 == 0 )
        {
            fprintf ( output, "1\n" );
        }
        else
        {
            fprintf ( output, "0\n" );
        }
    }
}



