#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void isSquare ( FILE *fp );

int main()
{
    FILE* input = fopen ( "inputTask2.txt", "r" );
    isSquare ( input );
    getch();
    return 0;
}

void isSquare ( FILE *fp )
{
    FILE* output = fopen ( "resultTask2.txt", "w" );
    char symbol;
    long  long int number = 0;
    void checkSquareRoot ( long long number,  FILE * output )
    {
            long long int  result = sqrt(number);
            long long int result2 = result * result;
            if ( number - result2  == 0){
                fprintf(output, "%lli\n", result2);
            }
    }
    while ( 1 )
    {
        if ( fscanf ( fp, "%lli", &number ) == EOF )
        {
            break;
        }
            printf("%lli\n", number);
            checkSquareRoot (number, output);

    }
}



