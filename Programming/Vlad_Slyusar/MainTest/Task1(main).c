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
    int number, sum = 0;
    void checkDivThree ( int sum,  FILE * output )
    {
        if ( sum % 3 != 0 || sum == 0 )
        {
            fprintf ( output, "0\n" );
        }
        else
        {
            fprintf ( output, "1\n" );
        }
    }
    while ( 1 )
    {
        if ( fscanf ( fp, "%c", &symbol ) == EOF )
        {

            checkDivThree ( sum, output );
            sum = 0;
            break;
        }
        if ( symbol == '\n' )
        {
            checkDivThree ( sum, output );
            sum = 0;
            continue;
        }
        number = symbol - 48;
        sum += number;
    }
    fclose(output);
}



