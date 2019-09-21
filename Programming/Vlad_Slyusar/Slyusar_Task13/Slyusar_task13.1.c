#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#define P 3.14

typedef struct
{
    int a;
    float b;
    char c;
} numbers;

typedef struct
{
    int length;
    int width;
} Rectangle;

typedef struct
{
    int radius;
} Circle;

typedef struct
{
    float a;
    float b;
    float c;
} Triangle;

typedef struct
{
    Rectangle rectangle;
    Circle circle;
} Shape;

int getRectangleSquare ( Rectangle temp );

float getCircleSquare ( Circle temp );

float getTriangleSquare ( Triangle temp );

void printShape ( Shape shape );



int main()
{
    Rectangle number1 = {10, 20};
    Circle circle = {10};
    Shape shape;
    shape.rectangle.length = 20;
    shape.rectangle.width = 50;
    shape.circle.radius = 15;
    printShape ( shape );
    Triangle triangle = {3, 4, 5};
    printf ( "Square Triangle = %g\n", getTriangleSquare ( triangle ) );
    printf ( "Square Circle = %g\n", getCircleSquare ( circle ) );
    printf ( "Square = %i\n", getRectangleSquare ( number1 ) );
    getch();
    return 0;
}


int getRectangleSquare ( Rectangle temp )
{
    return temp.length * temp.width;
}

float getCircleSquare ( Circle temp )
{
    return temp.radius * temp.radius * P;
}

float getTriangleSquare ( Triangle temp )
{
    float p = temp.a + temp.b + temp.c;
    p /= 2;
    float S = sqrt ( ( p * ( p - temp.a ) * ( p - temp.b ) * ( p - temp.c ) ) );
    return S;
}

void printShape ( Shape shape )
{
    printf ( "length = %i, width = %i, radius = %i\n", shape.rectangle.length, shape.rectangle.width, shape.circle.radius );
}
