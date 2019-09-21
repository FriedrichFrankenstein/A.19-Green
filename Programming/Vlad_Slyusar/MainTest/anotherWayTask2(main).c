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
    long  long int number = 0;
    long long int  result;
    long long int result2;
    while ( fscanf ( fp, "%lli", &number ) != EOF )
    {
            result = sqrt(number);
            result2 = result * result;
            if ( number - result2  == 0){
                fprintf(output, "%lli\n", number);
            }

    }
    fclose(output);
}



