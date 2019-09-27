#include <stdio.h>
#include <string.h>
#define pi 3.14

typedef struct
{
    int length;
    int width;
}Rectangle;
typedef struct
{
    int radius;
}Circle;

int getRectangleSquare(Rectangle rectangle);
float getCircleSquare(Circle circle);
int main()
{
    Rectangle rectangle = {10, 20};
    Circle circle = {5};

    int square = getRectangleSquare(rectangle);
    float circleSquare = getCircleSquare(circle);

    printf("Trigle square = %i\n", square);
    printf("Circle square = %f\n", circleSquare);

    return 0;
}
int getRectangleSquare(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}
float getCircleSquare(Circle circle){
    return pi * circle.radius * circle.radius;
}
