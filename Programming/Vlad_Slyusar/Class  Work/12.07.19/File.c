#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>





int main ()
{
    char name [20] ;
    int year ;
    float height;
    char buffer [40]  = "Vlad 23 1.84";
    char result [40];
    FILE *input = fopen ( "inputText.txt", "w" );
    FILE *output = fopen ( "outputText.txt", "a" );


    scanf("%s %i %f", name, &year, &height);
    fflush(stdin);
    sprintf ( result, "Student %s. %i years old. Height %f\n", name, year, height );
    fprintf ( output, "%s", result );

    sscanf ( buffer, "%s %i %f", name, &year, &height );
    fflush(stdin);
    sprintf ( result, "Student %s. %i years old. Height %f\n", name, year, height );
    fprintf ( output, "%s", result );


    fscanf ( input, "%s %i %f", name, &year, &height );
    fflush(stdin);
    sprintf ( result, "Student %s. %i years old. Height %f\n", name, year, height );
    fprintf ( output, "%s", result );
//    sprintf(buffer, "HELLO %s %c - %i\n",color, sym, number);
//    printf("%s",buffer );
//    fprintf(output, "%s", buffer);
//    scanf ("%s %i %c", color, &number, &sym );
//    printf("HELLO %s %c - %i",color, sym, number );
//    fscanf(input, "%s %c %i", color, &sym, &number);
//    printf("HELLO %s %c - %i",color, sym, number );
    fclose ( output );
    fclose ( input );
    getchar();
    return 0;
}
