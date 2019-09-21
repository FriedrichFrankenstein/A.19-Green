#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#define P 3.14

typedef struct
{
    int x1;
    int y1;
    int x2;
    int y2;
} Line;

float lengthLine ( Line firstLine );

int main()
{
    Line firstLine;
    printf ( "Enter x and y for first point: " );
    scanf ( "%i %i", &firstLine.x1, &firstLine.y1 );
    printf ( "Enter x and y for second point: " );
    scanf ( "%i %i", &firstLine.x2, &firstLine.y2 );
    printf("Result = %f",lengthLine(firstLine) );
    getch();
    return 0;
}

float lengthLine ( Line firstLine )
{
    float res;
    res = sqrt ( pow( ( firstLine.x2 - firstLine.x1 ),2) + pow( ( firstLine.y2 - firstLine.y1 ), 2 ));
    return res;
}
